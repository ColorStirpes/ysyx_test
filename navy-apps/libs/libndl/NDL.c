#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/time.h>

static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0, canvas_w = 0, canvas_h = 0;

struct timeval start;
uint32_t NDL_GetTicks()
{
  struct timeval now;
  gettimeofday(&now, NULL);
  uint32_t time_use = (now.tv_sec - start.tv_sec) * 1000 + (now.tv_usec - start.tv_usec) / 1000;
  return time_use;
}

int event_handle = -1;
int NDL_PollEvent(char *buf, int len)
{
  int ret = read(event_handle, buf, len);
  if (ret)
  {
    return 1;
  }
  else
    return 0;
}

int dispinfo_handle = -1;
void NDL_OpenCanvas(int *w, int *h)
{
  char dispinfo[128] = {};
  char screen_width[6];
  char *screen_height;
  read(dispinfo_handle, dispinfo, 48);
  //assert(!strncmp("WIDTH :", dispinfo, 6));
  int index = 0;
  for(int i = 7; dispinfo[i] >= '0' && dispinfo[i] <= '9' || dispinfo[i] == ' '; i++){
    if(dispinfo[i] == ' ')
      continue;
    screen_width[index++] = dispinfo[i];
  }
  int i = 7;
  while(dispinfo[i] != ':') i ++;
  screen_height = &dispinfo[++i];
  screen_w = atoi(screen_width);
  screen_h = atoi(screen_height);


  if(*w == 0 && *h == 0){
    *w = screen_w;
    *h = screen_h;
  }

    if (getenv("NWM_APP"))
    {
      //////printf("%d,%d,%d,%d\n",screen_w,screen_h,*w,*h);
      int fbctl = 4;
      fbdev = 5;
      screen_w = *w;
      screen_h = *h;
      char buf[64];
      int len = sprintf(buf, "%d %d", screen_w, screen_h);
      // let NWM resize the window and create the frame buffer
      write(fbctl, buf, len);
      while (1)
      {
        // 3 = evtdev
        int nread = read(3, buf, sizeof(buf) - 1);
        if (nread <= 0)
          continue;
        buf[nread] = '\0';
        if (strcmp(buf, "mmap ok") == 0)
          break;
      }
      close(fbctl);
    }

    canvas_w = *w;
    canvas_h = *h;
}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h)
{

  //居中
  x += (screen_w - canvas_w) / 2;
  y += (screen_h - canvas_h) / 2;

  int fb = open("/dev/fb", 0, 0);

  //printf("NDL x:%d, y:%d, w:%d, h:%d\n",x,y,w,h); 

  for(int i = 0; i < h; i++){
    lseek(fb, (x + (y + i) * screen_w) * 4, SEEK_SET);
    write(fb, pixels, w * 4);
    pixels += w;
  }
   
}

int sbctl_handle = -1;
int sb_handle = -1;
void NDL_OpenAudio(int freq, int channels, int samples)
{
  int buf[3] = {freq, channels, samples};
  sbctl_handle = open("/dev/sbctl", "w+");
  sb_handle = open("/dev/sb", "w+");
  write(sbctl_handle, buf, 12);

}

void NDL_CloseAudio()
{
  close(sb_handle);
  close(sbctl_handle);
}

int NDL_QueryAudio()
{
  int remain = read(sbctl_handle, NULL, 4);
  return remain;
}

int NDL_PlayAudio(void *buf, int len)
{

  while(NDL_QueryAudio() < len);
  write(sb_handle, buf, len);
  return len;
}



int NDL_Init(uint32_t flags)
{
  gettimeofday(&start, NULL);
  event_handle = open("/dev/events", "r+");
  dispinfo_handle = open("/proc/dispinfo", "r+");
  
  if (getenv("NWM_APP"))
  {
    evtdev = 3;
  }
  return 0;
}

void NDL_Quit()
{
  close(event_handle);
  close(dispinfo_handle);
}
