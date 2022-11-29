#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{ int pid;
  pid=fork();
 for(int i=0;i<3;i++)
  { if(pid)
	  {printf("\nChild Process ID:%d\n",pid); 
    	   pid=fork();
	  }
  }
 return 0;
}	
