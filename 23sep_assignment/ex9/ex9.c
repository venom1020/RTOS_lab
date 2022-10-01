#include<stdio.h>
void enterdata(FILE *);
int main(){
FILE *a;
a=fopen("Database.txt","a");
enterdata(a);
fclose(a);
}



void enterdata(FILE *a){
char name[20],section[10];
int marks[5];
printf("Enter name:");
scanf("%s",name);
printf("Enter section:");
scanf("%s",section);
printf("Enter marks in five subject\n");
for(int i=0;i<5;i++) scanf("%d",&marks[i]);
fprintf(a,"# %s\t | ## %s \t| ###",name,section);
for(int i=0;i<5;i++) fprintf(a," %d ",marks[i]);
fprintf(a,"\n");	

}
