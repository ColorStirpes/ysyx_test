#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256, TK_EQ,TK_NUMBER = 9,

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"==", TK_EQ},        // equal
  {"-", '-'},
  {"\\*", '*'},
  {"/", '/'},
  {"\\(", '('},
  {"\\)", ')'},
  {"\\d", TK_NUMBER},
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        switch (rules[i].token_type) {
	  case 9:
		  tokens[nr_token].type = TK_NUMBER; 
		  strncpy(tokens[nr_token++].str, substr_start, substr_len);
		  break;
	  case '+':
		  tokens[i].type = '+';
	          nr_token ++;
		  break;
	  case '-':
                  tokens[i].type = '-';
	          nr_token ++;
	          break;
	  case '*':
                  tokens[i].type = '*';
	          nr_token ++;
		  break;
	  case '/':
                  tokens[i].type = '/';
	          nr_token ++;
	          break;
	  case '(':
		  tokens[nr_token].type = '(';
		  strcpy(tokens[nr_token++].str, substr_start);
	          break;
	  case ')':
                  tokens[nr_token].type = ')';
		  strcpy(tokens[nr_token++].str, substr_start);
                  break;
	 
          default:
		  tokens[i].type = 256;
		  break;

        }

        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}



bool check_parentheses(int p , int q){

	char tmp[32]={};
	int cnt = 0;
	int NW_paren = 0;
	if(tokens[p].type != '{' && tokens[p].type != '[' && tokens[p].type != '(') {
		NW_paren = 1;
	}
	for (int i = p; i <= q; i++) {
		if (tokens[p].type == '{' || tokens[p].type == '[' || tokens[p].type == '(') {
			tmp[cnt++] = tokens[p].type;
		}
		else if (cnt != 0 && (tmp[cnt - 1] + 1 == tokens[p].type || tmp[cnt - 1] + 2 == tokens[p].type)) {
			if(cnt  == 1 && p != q)
				NW_paren = 1;
			cnt--;
		}
	}

	if (cnt != 0)
		assert("The expression is illegal.\n");

	if(NW_paren)
		return false;
	else
		return true;
}



int Primary_op(int p , int q){
        int op = -1;
        for(int i = p+1; i <= q; i++){
                if(tokens[i].type == '{' || tokens[i].type == '[' || tokens[i].type == '('){
                        for(int j = q ;j > p; j--){
                                if(check_parentheses(i , j))
                                        i = j + 1;
                        }

                }
                else if(tokens[i].type == '+' || tokens[i].type == '-' || tokens[i].type == '*' || tokens[i].type == '/'){
                        if(tokens[i].type == '+' || tokens[i].type == '-')
                                op = i;
                        else{
                                if(op == -1)
                                        op = i;
				else if(tokens[op].type == '*' || tokens[op].type == '/')
					op = i;
                        }
                }
                else{
                        continue;
                }
        }
        if(op == -1)
                assert("no main option.\n");
        return op;
}


uint32_t eval(int p,int q) {
  if (p > q) {
    printf("p is %d > q is %d\n",p,q);
    assert("This is a bad expression. Stop!\n");
    return 0;    
  }
  else if (p == q) {
    /* Single token.
     * For now this token should be a number.
     * Return the value of the number.
     */

     if(tokens[p].type == TK_NUMBER) {
	     uint32_t n;
	     sscanf(tokens[p].str,"%d",&n);
	     return n;
     }
     else{
	     return eval(p+1,q-1);
     }
  }
  else if (check_parentheses(p, q) == true) {
    /* The expression is surrounded by a matched pair of parentheses.
     * If that is the case, just throw away the parentheses.
     */
    return eval(p + 1, q - 1);
  }
  else {
    /* We should do more things here. */
      int op = Primary_op(p,q);                  // the position of 主运算符 in the token expression;
      uint32_t val1 = eval(p, op - 1);
      uint32_t val2 = eval(op + 1, q);

    switch (tokens[op].type) {
      case '+': return val1 + val2;
      case '-': return val1 - val2;
      case '*': return val1 * val2;
      case '/': return val1 / val2;
      default: assert(0);
	       return 0;
    }
  }
}

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
  TODO();

  return 0;
}
