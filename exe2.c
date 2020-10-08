#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void* print(void *ptr);

int main(){
  pthread_t thread1, thread2;

  pthread_t thread[5];

  char* hello = "hello";

  int i;
  for(i = 0; i < 5; i++)
    pthread_create( &thread[i], NULL, print, (void*) hello);

  for(i = 0; i < 5; i++)
    pthread_join(thread[i], NULL);

  exit(0);
  return 0;
}

void* print(void* msg){
  void* vp;
  printf("%s\n", msg);

  return vp;
}