#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

struct student{
char name[20],section[20];
int marks[5];	
};
typedef struct student student;

void enterData(FILE *);
void displayData(FILE * ,int);

int main(){
FILE *a;
int choice;

while(1){
system("cls");	
printf("\n1.Enter to database\n2.Display database\n3.Find students with >80 in all subjects\n4.Exit\nEnter your choice: ");
scanf("%d",&choice);
switch(choice)
{ case 1: a=fopen("Database.txt","a");
		  enterData(a);
		  fclose(a);
		  getch();
		  break;
  case 2: a=fopen("Database.txt","r");
		  displayData(a,0);
		  fclose(a);
		  getch();
		  break;
  case 3: a=fopen("Database.txt","r");
		  displayData(a,1);
		  fclose(a);
		  getch();
		  break;
  case 4: return 0;		  
  default: break;		  
}
}
}

void enterData(FILE *a){
student s;
printf("Enter name:");
scanf("%s",s.name);
printf("Enter section:");
scanf("%s",s.section);
printf("Enter marks in five subject\n");
for(int i=0;i<5;i++) scanf("%d",&s.marks[i]);
fprintf(a,"\n# %s\t | ## %s \t| ###",s.name,s.section);
for(int i=0;i<5;i++) fprintf(a," %d ",s.marks[i]);	
}

void displayData(FILE *a, int mode){
  student s;
  int flag=1;
  char c,temp[20];
  while(!feof(a))
  { fscanf(a,"%s",temp);
	flag=1;
    if(strcmp(temp,"#")==0)
      { fscanf(a,"%s",s.name);
        continue;
      }
    if(strcmp(temp,"##")==0)
    { fscanf(a,"%s",s.section);
      continue;
    }
    if(strcmp(temp,"###")==0 && !feof(a))
    { 	for(int i=0;i<5;i++){
        fscanf(a,"%d",&s.marks[i]);
        if(s.marks[i]<80) flag=0;
      }
      if(mode==0){
	printf("\n%s %s",s.name,s.section);
	for(int i=0;i<5;i++) printf(" %d",s.marks[i]);    	
    } 
    if(mode==1 && flag==1){
    	printf("%s %s",s.name,s.section);
	for(int i=0;i<5;i++) printf(" %d",s.marks[i]); 
    }   
  }	  
    } 
    

}