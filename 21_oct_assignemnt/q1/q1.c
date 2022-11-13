#include<stdlib.h>
#include<stdio.h>
#include<string.h>

char word[20];

int check(char *);
int main()
{	FILE *a,*b,*c;
	a=fopen("file1.txt","r");
	b=fopen("file2.txt","r");
	c=fopen("output.txt","w");
	
	fprintf(c,"Unique words from file 1:\n");
	while(!feof(a))
	{ fscanf(a,"%s",word);
	  if(!check("file2.txt"))
	  { fprintf(c,"%s ",word);
	  }
	}

	fprintf(c,"\nUnique words from file 2:\n");
	while(!feof(b))
	{ fscanf(b,"%s",word);
	  if(!check("file1.txt"))
	  { fprintf(c,"%s ",word);
	  }
	}

	fclose(a);
	fclose(b);
	fclose(c);
	return 0;
}

int check(char *fname)
{ FILE *temp;
  char w[20];
  temp=fopen(fname,"r");
  while(!feof(temp))
  { fscanf(temp,"%s",w);
	if(strcmp(w,word)==0) 
		{ fclose(temp);
		  return 1;
		}
  }
  fclose(temp);
  return 0;

}