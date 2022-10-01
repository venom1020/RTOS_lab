#include<string.h>
#include<stdio.h>
#include<ctype.h>

//strupr() and strlwr() works in gcc 6.3.0 windows machine. 
//Otherwise use user defined function.
/*void strupr(char string[]){
int i=0;
char c=string[i];
while(c!='\0')  
  { string[i]=toupper(c);
    c=string[++i];
  }
  
}*/

/*void strlwr(char string[]){
int i=0;
char c=string[i];
while(c!='\0')  
  { string[i]=tolower(c);
    c=string[++i];
  }
  
}*/


int main()
{ FILE *a,*b;
  char temp[20],names[20][20]={"Manipal","msis","names","Udupi"};
  
  a=fopen("source.txt","r");
  if(a==NULL) {printf("I/p file not found");
  return 0;
  }
  b=fopen("output.txt","w");
  while(!feof(a))
  { fscanf(a,"%s",temp);
    	for(int i=0;i<4;i++)
    	{ if(strcmp(temp,names[i])==0) 
          { if(isupper(temp[0])==0)
               strupr(temp);
               else
               strlwr(temp); 
            fprintf(b,"%s ",temp); 
          }

    	}
     

  } 
  fclose(a);
  fclose(b);
return 0;	
}