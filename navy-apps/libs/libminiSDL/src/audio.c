#include <NDL.h>
#include <SDL.h>


int nplay = 0;
long old_time = 0;
long new_time = 0;
SDL_AudioSpec *audio = NULL;
int SDL_OpenAudio(SDL_AudioSpec *desired, SDL_AudioSpec *obtained) {
  printf("1111\n");
  NDL_OpenAudio(desired->freq, desired->channels, desired->samples);
  audio = desired;
  nplay = 0;
  old_time = SDL_GetTicks();
  SDL_PauseAudio(1);
  return 0;

}

void SDL_CloseAudio() {
  printf("33333\n");
  NDL_CloseAudio();
}

int timeback(){
  long ms = (audio->samples * 1000) / audio->freq;
  new_time = SDL_GetTicks();
  if((new_time - old_time) >= ms){
    old_time = new_time;
    return 1;
  }
  else{
    return 0;
  }
}

uint8_t stream[44100] = {};
int st_index = 0;
void SDL_PauseAudio(int pause_on) {
  printf("22222\n");
  if(pause_on == 0){
    
    while (nplay < audio->size) {
      
      if(timeback()){

        audio->callback(audio->userdata, stream, audio->samples * audio->format);
        st_index = 0;

      }
      int len = (audio->size - nplay > 4096 ? 4096 : audio->size - nplay);
      NDL_PlayAudio(&stream[st_index], len);
      st_index += len;
      nplay += len;
      printf("Already play %d/%d bytes of data\n", nplay, audio->size);
    
    }
  }

}

void SDL_MixAudio(uint8_t *dst, uint8_t *src, uint32_t len, int volume) {
}

SDL_AudioSpec *SDL_LoadWAV(const char *file, SDL_AudioSpec *spec, uint8_t **audio_buf, uint32_t *audio_len) {
  return NULL;
}

void SDL_FreeWAV(uint8_t *audio_buf) {
}

void SDL_LockAudio() {
}

void SDL_UnlockAudio() {
}
