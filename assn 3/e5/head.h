#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

//struct to store process information
typedef struct process
{ int id,pr,at,bc;
}process;

//get next process  for SJFS
process * next(process arr[],int gant,int index,int num)
{ process *min;
  min=&arr[index+1];
	for(int i=index+1;i<num;i++)
 	{ if(arr[i].at<=gant && arr[i].bc< min->bc)
 		{ min=&arr[i];

 		}
 	}
 	return min;
}

//swap two process present in the array by using their pointers
void swap(process *a,process *b)
{ if(a==b) return;
  process temp;
  temp=*a;
  *a=*b;
  *b=temp;

}

//sorting for FCFS algorithm
void sort(process arr[] ,int num)
{ process temp;
	for(int i=0;i<num;i++)
	{for(int j=1;j<num-i;j++)
		{ if(arr[j-1].at>arr[j].at)
			{ swap(&arr[j-1],&arr[j]);
			}

		}
	}
}

//sorting for Priority algorithm
void sortP(process arr[] ,int num)
{  process temp;
	for(int i=0;i<num;i++)
	{for(int j=1;j<num-i;j++)
		{ if(arr[j-1].pr>arr[j].pr)
			{  swap(&arr[j-1],&arr[j]);
			}

		}
	}
}

//sorting for SJFS algorithm
void sortJ(process arr[] ,int num)
{ process temp,*p;
	int gant=0;
	for(int i=0;i<num;i++)
	{for(int j=1;j<num-i;j++)
		{ if(arr[j-1].at>arr[j].at)
			{ swap(&arr[j-1],&arr[j]);
			}
		   else if(arr[j-1].at==arr[j].at && arr[j-1].bc>arr[j].bc) 
		   		swap(&arr[j-1],&arr[j]);
		   	else continue;
		}
	}

	for(int i=0;i<num-1;i++)
	{ gant+=arr[i].bc;
	  p=next(arr,gant,i,num);
	  swap(p,&arr[i+1]);
	}

}

void input(process arr[],int num)
{ for(int i=0;i<num;i++)
	{ printf("\nEnter AT,BC,PR for %d:",i);
	  scanf("%d %d %d",&arr[i].at,&arr[i].bc,&arr[i].pr);
	  arr[i].id=i+1;
	}

}


void fcfs(process arr[],int num)
{ 	sort(arr,num);

	int wt[num],avwt=0,avtat=0,tat[num],ct[num],temp=0;
  for(int i=0;i<num;i++)
  { temp+=arr[i].bc;
 	ct[i]=temp;
 	tat[i]=ct[i]-arr[i].at;
 	wt[i]=tat[i]-arr[i].bc;
 	avwt+=wt[i];
 	avtat+=tat[i];
  }
  printf("\n----------------------FCFS------------------\n");
  printf("\nAvg TAT:%.2f Avg WT:%.2f\n",(float)avtat/num,(float)avwt/num);
  
}


void priority(process arr[],int num)
{ sortP(arr,num);
	int wt[num],avwt=0,avtat=0,tat[num],ct[num],temp=0;
  for(int i=0;i<num;i++) 
  {	temp+=arr[i].bc;
 	ct[i]=temp;
 	tat[i]=ct[i];
 	wt[i]=tat[i]-arr[i].bc;
 	avwt+=wt[i];
 	avtat+=tat[i];
  }
  printf("\n------------PRIORITY(non-premptive)----------\n");
  printf("\nAvg TAT:%.2f Avg WT:%.2f\n",(float)avtat/num,(float)avwt/num);
  
}

void sjfs(process arr[],int num)
{ sortJ(arr,num);
	int wt[num],avwt=0,avtat=0,tat[num],ct[num],temp=0;
  temp=arr[0].at;
  for(int i=0;i<num;i++)
  { temp+=arr[i].bc;
 	ct[i]=temp;
 	tat[i]=ct[i]-arr[i].at;
 	wt[i]=tat[i]-arr[i].bc;
 	avwt+=wt[i];
 	avtat+=tat[i];
  }
  printf("\n----------------SJFS(non-premptive)---------------\n");
  printf("\nAvg TAT:%.2f Avg WT:%.2f\n",(float)avtat/num,(float)avwt/num);

}