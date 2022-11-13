#include<stdlib.h>
#include<stdio.h>
#include<string.h>

FILE *output;

void printPage(FILE *a);
int main()
{	int n;
	char fname[10];
	printf("How many files to read:");
	scanf("%d",&n);
	FILE *a[n];
	output=fopen("output.txt","w");
	for(int i=0;i<n;i++){
		sprintf(fname,"file%d.txt",i+1);
		a[i]=fopen(fname,"r");
		fprintf(output,"\n----------------------------\nTitle: File %d\n",i+1);
	  	printPage(a[i]);
	  	fprintf(output,"Page:%d",i+1);
	}

	fclose(output);
	return 0;
}

void printPage(FILE *a)
{ char temp[20];
	while(!feof(a))
	{ fscanf(a,"%s",temp);
	  printf("%s",temp);
	  fprintf(output,"%s",temp);
	}
 fclose(a);
}