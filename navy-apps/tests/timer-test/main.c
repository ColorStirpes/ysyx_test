#include <stdio.h>
#include <assert.h>
#include <sys/time.h>
#include <NDL.h>

// int main() {
//   struct timeval tv_begin, tv_end;
//   int sec = 1;
//   //gettimeofday(&tv_begin, NULL);
//   //printf("start tv_sec %ld tv_usec %ld\n", tv_begin.tv_sec, tv_begin.tv_usec);
//   gettimeofday(&tv_end, NULL);
//   sec = tv_end.tv_sec + 1;
//   while (sec < 150) {
//   	while(tv_end.tv_sec < sec) {
// 		gettimeofday(&tv_end, NULL);
// 	}
//   	printf("end tv_sec %ld tv_usec %ld sec %ld\n", tv_end.tv_sec, tv_end.tv_usec, sec);
//   	sec++;
//   }

//   printf("PASS!!!\n");

//   return 0;
// }


int main() {
  NDL_Init(1);
  long int sec = 1;
  sec = NDL_GetTicks() / 500;
  while (sec < 300) {
  	while((NDL_GetTicks() / 500) < sec);
  	printf("sec %ld\n", sec);
  	sec++;
  }

  printf("PASS!!!\n");

  return 0;
}


