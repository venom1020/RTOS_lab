#include<stdio.h>
//#include<sys/types.h>
#include<unistd.h>
int main()
{ int pid;
  pid=fork();
  if(pid==0)
  printf("\nI am child!\n");
  else
  printf("\nI am parent!\n");  
 return 0;
}	
