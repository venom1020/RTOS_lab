#include<stdio.h>
#include<stdlib.h>
void printEveOdd(int[],int);

int main(){
int len,arr[100];
char c;
while(1){
printf("Enter the length of array: ");
scanf("%d",&len);
printf("Enter the array:");
for(int i=0;i<len;i++) scanf("%d",&arr[i]);
printEveOdd(arr,len);
printf("\nDo you wish to continue:(y/n):");
scanf(" %c",&c);
if(c=='n'|| c=='N') exit(0);
else 
continue;
}
return 0;
}

void printEveOdd(int arr[],int len)
{ printf("\n Odd elements:");
   for(int i=0;i<len;i++){
	if(arr[i]%2!=0) printf(" %d",arr[i]);
  }
  printf("\n Even elements:");
   for(int i=0;i<len;i++){
	if(arr[i]%2==0) printf(" %d",arr[i]);
  }

}