#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

#define EXP_LONG  32;

// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";


int n = 1;

static uint32_t choose(uint32_t n){
	srand(time(0));
	return rand() % n;
}

static void gen(char f){
	buf[n++] = f;
}

static void gen_rand_op(){
	switch (choose(5)){
	  case 0: buf[n++] = '+'; break;
          case 1: buf[n++] = '-'; break;
 	  case 2: buf[n++] = '*'; break;
	  case 3: buf[n++] = '/'; break;
	  default: buf[n++] = ' '; break;
	}
}

static void gen_num(){
	unsigned int num = rand() % (1 << 8);
	char *now_buff = buf + strlen(buf);
	sprintf(now_buff, "%d", num);
	//strcpy(now_buff,(char)num);
}

static void gen_rand_expr( ) {
  buf[0] = '\0'; 
	 
       
     
   
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    gen_rand_expr();

    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    fscanf(fp, "%d", &result);
    pclose(fp);

    printf("%u %s\n", result, buf);
  }
  return 0;
}
