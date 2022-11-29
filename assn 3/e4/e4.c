#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{ int pid;
  char str1[]="I am in manipal enjoying the environment of manipal.. and MSIS campus is very nice";
  char str2[]="I am student of MSIS. And I am good";
  FILE *a,*b;
  pid=fork();
  if(pid)
  { 
    a=fopen("parent.txt","w");
    fprintf(a,"%s",str1);
    printf("Parent :%s\n",str1);
    fclose(a);
  }
  else
  { 
    b=fopen("child.txt","w");
    fprintf(b,"%s",str2);
    printf("Child :%s\n",str2);
    fclose(b);
  }
  return 0;
}
