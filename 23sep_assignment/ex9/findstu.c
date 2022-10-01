#include<stdio.h>
#include<string.h>
int main()
{ FILE *a;
  a=fopen("Database.txt","r");
  int arr[5];
  char name[10],section[10],temp[10];
  while(!feof(a))
  { fscanf(a,"%s",temp); 
    if(strcmp(temp,"#")==0)
      { fscanf(a,"%s",name);
        printf("\n%s ",name);
        continue;
      }
    else if(strcmp(temp,"##")==0)
    { fscanf(a,"%s",section);
      printf("%s ",section);
      continue;
    }
    else if(strcmp(temp,"###")==0)
    { for(int i=0;i<5;i++){
        fscanf(a,"%d",&arr[i]);
        printf("%d %d ",arr[i],i);
      }
      fscanf(a,"%s",temp); 
      continue;

    } 
    
  }	

return 0;	
}