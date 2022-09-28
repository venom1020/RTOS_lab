#include<stdio.h>


float sum(float arr[], int len)
{ float su=0;
	for(int i=0;i<len;i++)
 		su+=arr[i];
  return su;
}

float avg(float arr[],int len)
{
	return sum(arr,len)/len;
}


float prod(float arr[],int len)
{
float pro=1;
for(int i=0;i<len;i++)
 		pro*=arr[i];
return pro;
}

int main()
{ float arr[100];
  printf("Enter the elements of the array: ");
  int len=0,i=0;
  while(1){
    scanf("%f",&arr[i]);
    len++;
    if(arr[i]==888)
      {
        len--;
        break;
      } 
      i++;
  }
  printf("\nSum=%f\nAverage=%f\nProduct=%f\n",sum(arr,len),avg(arr,len),prod(arr,len)); 	
  
return 0;
}