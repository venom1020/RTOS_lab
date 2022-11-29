#include"head.h"
int main()
{ int no_of_process,pid;
  printf("Enter number of process:");
  scanf("%d",&no_of_process);
  process arr[no_of_process];
  input(arr,no_of_process);
  pid=fork();
  if(pid==0)
  {
  fcfs(arr,no_of_process);
  priority(arr,no_of_process);
  sjfs(arr,no_of_process);
  }
  return 0;
}