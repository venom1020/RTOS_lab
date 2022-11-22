#include<stdlib.h>
#include<stdio.h>
#include<string.h>

FILE *output;

void printPage(char *a);
int main()
{	int n;
	char fname[10];
	printf("How many files to read:");
	scanf("%d",&n);
	output=fopen("output.txt","w");
	for(int i=0;i<n;i++){
		sprintf(fname,"file%d.txt",i+1);
		fprintf(output,"\n----------------------------\nTitle: File %d\n",i+1);
	  	printPage(fname);
	  	fprintf(output,"\n\nPage:%d",i+1);
	}

	fclose(output);
	return 0;
}

void printPage(char *fname)
{ char temp[20];
	FILE *a;
	a=fopen(fname,"r");
	if(a==NULL) 
		{   printf("\n%s is Empty",fname);
			return;
		}
	else
	{	
	while(!feof(a))
	{
	  fscanf(a,"%s",temp);
	  fprintf(output,"%s ",temp);
	}
	}
 	fclose(a);
 	
}