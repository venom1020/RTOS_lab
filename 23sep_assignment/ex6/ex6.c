#include <stdio.h>
#include<stdlib.h>
int main()
{   FILE *a,*b;
	char c,sFilename[20],dFilename[20];
	printf("Enter the name of file to copy: ");
	scanf("%s",sFilename);
	a=fopen(sFilename,"r");
	if(a==NULL) 
	{printf("\nCannot open %s to copy!!",sFilename);
		exit(0);
	}
	printf("\nName the Destination filename:");
	scanf("%s",dFilename);
	b=fopen(dFilename,"w");
	while(!feof(a))
	{ fscanf(a,"%c",&c);
	  fprintf(b,"%c",c);
	  
	}
	fclose(a);
	fclose(b);
	return 0;
}