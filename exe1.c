#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h>
#include <signal.h>

void parentProcess(){
  printf("hello world\n");
}

void childProcess(){
  printf("hello world\n");
}

int main() { 
    
    int p = fork();

    if(p == 0){
      childProcess();
      kill(p,SIGKILL);
    }
    
    else if(p > 0)
      parentProcess();

    return 0;
}