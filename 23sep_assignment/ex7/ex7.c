#include<stdio.h>

int main()
{  FILE *a;
	char c,filename[20];
	printf("Enter filename to write to:");
	scanf("%s",filename);
	a=fopen(filename,"w");
	printf("Enter the input to file:\n");
	scanf(" %c",&c);
	while(c!='\n')
	{ fputc(c,a);
	  scanf("%c",&c);	  
	}
	fclose(a);
  
return 0;
}