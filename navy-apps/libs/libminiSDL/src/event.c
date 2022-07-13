#include <NDL.h>
#include <SDL.h>
#include <string.h>

#define keyname(k) #k,
#define NUM_KEYS ( sizeof(keyname) / sizeof(keyname[0]) )
static uint8_t keystate[83]={0};

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

int SDL_PushEvent(SDL_Event *ev) {
  return 0;
}

int SDL_PollEvent(SDL_Event *event) {
  
  if(event == NULL) return 0;

  char buf[256] = {};
  int enpty = NDL_PollEvent(buf, 255);
  if(enpty == 0){
    return 0;
  }
  
  if(buf[0] == 'k'){
    
    event->type = buf[1] == 'd' ? SDL_KEYDOWN : SDL_KEYUP;
    event->key.type = buf[1] == 'd' ? SDL_KEYDOWN : SDL_KEYUP;
    event->key.keysym.sym = SDLK_NONE;
    char keyname_r[32] = {0};
    int i = 0;
    for(; buf[i+3] != '\n'; i++){
      keyname_r[i] = buf[i + 3];
    }
    
    for(int i = 0; i < NUM_KEYS; i++)
      if (strcmp(keyname[i], keyname_r) == 0) {
            event->key.keysym.sym = i;
            keystate[i] = (event->type == SDL_KEYDOWN);
            break;
      }
  }
  return 1;
}


int SDL_WaitEvent(SDL_Event *event) {
  if(event == NULL) return 1;

  // char buf[256] = {};
  // NDL_PollEvent(buf, 255);
  // if(buf[0] == 'k'){
    
  //   event->type = buf[1] == 'd' ? SDL_KEYDOWN : SDL_KEYUP;
  //   event->key.type = buf[1] == 'd' ? SDL_KEYDOWN : SDL_KEYUP;
  //   event->key.keysym.sym = SDLK_NONE;
  //   char keyname_r[32] = {};
  //   for(int i = 0; buf[i+3] != '\n'; i++){
  //     keyname_r[i] = buf[i + 3];
  //   }
    
  //   for(int i = 0; i < NUM_KEYS; i++)
  //     if (strcmp(keyname[i], keyname_r) == 0) {
  //           event->key.keysym.sym = i;
  //           break;
  //     }
  // }
  while(!SDL_PollEvent(event));

  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  printf("SDL_PeepEvents!!!!!\n");
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  //assert(0);
  return keystate;
}
