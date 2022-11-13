#include<stdlib.h>
#include<stdio.h>

int main()
{ FILE *a,*b,*c;
  a=fopen("file1.txt","r");
  b=fopen("file2.txt","r");
  c=fopen("file3.txt","a");
  char temp[50];
  fprintf(c,"\nContents from file 1:\n");
  while(!feof(a))
  	{	fscanf(a,"%s ",temp);
 		fprintf(c,"%s ",temp);
  	}
  	
  	fprintf(c,"\n");
  	fprintf(c,"\nContents from file 2:\n");
  	while(!feof(b))
  	{	fscanf(b,"%s ",temp);
  		fprintf(c,"%s ",temp);
  	}

  fclose(a);
  fclose(b);
  fclose(c);	
}