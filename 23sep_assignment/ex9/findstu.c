#include<stdio.h>
#include<string.h>
int main()
{ FILE *a;
  a=fopen("Database.txt","r");
  int arr[5];
  char name[10],section[10],temp[10];
  while(!feof(a))
  { fscanf(a,"%s",temp);
  	while(strcmp(temp,"\n")!=0)
  	{	if(strcmp(temp,"#")==0)
  			fscanf(a,"%s",name);
  		if(strcmp(temp,"##")==0)
  			fscanf(a,"%s",section);	 

  	}	
  }	

return 0;	
}