#include<stdio.h>

void countLandW(FILE *f,int *a, int*b){
int lineCount=0;
char c;
while(!feof(f)){
c=fgetc(f);	
if(c=='\n') *a+=1;
if(c==' ') *b+=1;
}	
}

int main()
{   FILE *fptr;
	fptr=fopen("text.txt","r");
	int lines=0, words=0;
	int *a,*b;
	a=&lines;
	b=&words;
	countLandW(fptr,a,b);
	fclose(fptr);
	printf("\nWords=%d\nLines=%d\n",*b,*a);
	return 0;
}