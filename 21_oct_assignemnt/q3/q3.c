#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main()
{   FILE *a,*b;
	int i=0,j=0,flag=0,l1=0,l2=0;
	a=fopen("file1.txt","r");
	b=fopen("file2.txt","r");
	char lineF1[1000],lineF2[1000],c;
	while(!feof(a) && !feof(b))
	{ i=0; 
	  c='\0';
	  while(c!='.' && !feof(a)) 
	  	{ 	c=fgetc(a); 
	  	    lineF1[i++]=c; 	 
	  	}
	  lineF1[i]='\0';	
	    j=0;
	  c='\0';
	  while(c!='.' && !feof(b)) 
	  	{ c=fgetc(b);
	  	  lineF2[j++]=c;
	   	}
	  lineF2[j]='\0';
	  l1++;
	  l2++;
	  if(strcmp(lineF1,lineF2)!=0) 
	  { flag=1;
	  	break;

	  }
	}

	if(flag==1) {
		printf("\nChanges detected:\n");
		printf("\nLine of file 1 (Line no:%d): %s",l1,lineF1);
		printf("\n\nLine of file 2 (Line no:%d): %s",l2,lineF2);
		fclose(a);
		fclose(b);
		return 0;
	}
	printf("\nNo changes detected!!!!");
	fclose(a);
	fclose(b);
	return 0;
}