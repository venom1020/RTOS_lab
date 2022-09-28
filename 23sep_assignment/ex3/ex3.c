#include<stdio.h>
int strlength(char str[])
{   int i=0;
	while(str[i]!='\0'){
	i++;
	}
	return i-1;
}
int main()
{  char string[200];
   	FILE *fptr;
   fptr=fopen("ex3_ip.txt","r");
   for(int i=0;!feof(fptr);i++)
   {
     fscanf(fptr,"%c",&string[i]);	
   }
   
   fclose(fptr);
   printf("String from file: \n%s",string);
   printf( "\nThe length of the string read from the file is :%d\n",strlength(string));
   return 0;
}