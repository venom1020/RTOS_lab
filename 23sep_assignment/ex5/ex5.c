#include<stdio.h>
int main()
{ 
 FILE *inp,*even,*odd;
 char a[30];
 inp=fopen("input.txt","r");
 even=fopen("even.txt","w+");
 odd=fopen("odd.txt","w+");
 for(int i=1;!feof(inp);i++)
 {  fscanf(inp,"%s",a);
 	if(i%2!=0)
 	 { fprintf(odd,"%s ",a);
      }
      else
      {
      	fprintf(even,"%s ",a);
      }

 }
 fclose(inp);
 fclose(even);
 fclose(odd);
 return 0;	
}