#include <common.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
#define MULTIPROGRAM_YIELD() yield()
#else
#define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,   

static const char *keyname[256] __attribute__((used)) = {
    [AM_KEY_NONE] = "NONE",
    AM_KEYS(NAME)};

size_t serial_write(const void *buf, size_t offset, size_t len)
{
  for (int i = 0; i < len; i++)
    putch(((char *)buf)[i]);
  return len;
}

size_t events_read(void *buf, size_t offset, size_t len)
{
  char buff[128] = {};
  AM_INPUT_KEYBRD_T key = io_read(AM_INPUT_KEYBRD);
  int keycode = key.keycode;
  int down = key.keydown;
  
  
  if (keycode)
  {
    if(down){
      sprintf(buff, "kd %s\n", keyname[keycode]);
    }
    else{
      sprintf(buff, "ku %s\n", keyname[keycode]);
    }
    strcpy(((char *)buf + offset), buff);
    return len;

  }
  else{
    return 0;
  }

}


AM_GPU_CONFIG_T gpu;
size_t dispinfo_read(void *buf, size_t offset, size_t len)
{
  char dispinfo[128] = {}; 
  sprintf(dispinfo, "WIDTH : %d\nHEIGHT:%d", gpu.width, gpu.height);
  strncpy(((char *)buf + offset), dispinfo, len);  
  return len;
}


size_t fb_write(const void *buf, size_t offset, size_t len)
{
  int x = offset / 4 % gpu.width;   // 4 is each of point 
  int y = offset / 4 / gpu.width; 

  char *buff = (char *)buf;
  size_t ret = len;

  //printf("x:%d, y:%d, len:%d\n",x,y,len);

  if(len <= ((gpu.width - x) * 4)){
    io_write(AM_GPU_FBDRAW, x, y, buff, len/4, 1, false);
    len -= len;
  } 
  else {
    io_write(AM_GPU_FBDRAW, x, y, buff, (gpu.width - x), 1, false);
    len -= ((gpu.width - x) * 4);
    buff += ((gpu.width - x) * 4);
  }

  
  int i = 1;
  while(len > (gpu.width * 4) ){
    io_write(AM_GPU_FBDRAW, 0, y + i, buff, gpu.width, 1, false);
    buff += gpu.width * 4;
    len -=  gpu.width * 4;
    i++;
  }

  io_write(AM_GPU_FBDRAW, 0, y + i, buff, len, 1, true);
  
  return ret;

}

void init_device()
{
  Log("Initializing devices...");
  ioe_init();
  gpu = io_read(AM_GPU_CONFIG);
}
