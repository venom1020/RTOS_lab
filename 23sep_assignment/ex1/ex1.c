#include<stdio.h>
#define ARR_LEN 10

float sum(float arr[])
{ float su=0;
	for(int i=0;i<ARR_LEN;i++)
 		su+=arr[i];

 	return su;
}

float avg(float arr[])
{
	return sum(arr)/ARR_LEN;
}


float prod(float arr[])
{
float pro=1;
for(int i=0;i<ARR_LEN;i++)
 		pro*=arr[i];
return pro;
}

int main()
{ float arr[20];
  printf("Enter the elements of the array: ");
  for(int i=0;i<ARR_LEN;i++)
   scanf("%f",&arr[i]);
  printf("\nSum=%f\nAverage=%f\nProduct=%f\n",sum(arr),avg(arr),prod(arr)); 	
  
return 0;
}