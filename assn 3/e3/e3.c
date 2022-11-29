#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{ int pid,n,arr[100],sum=0,f=0;
   printf("Enter no of values to find Sum:");
   scanf("%d",&n);
   printf("Enter  values:");
   for(int i=0;i<n;i++)
	 scanf("%d",&arr[i]);
 
  pid=fork();
  if(pid==0)
  { 
    for(int i=0;i<n;i++)
	    sum+=arr[i];
    printf("\nSum=%d\n",sum);
  }  
  
 return 0;
}
