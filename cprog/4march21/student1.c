#include<stdio.h>
int main()
{
  int i,avg,count=0,sum=0,marks[20];
  
  for(i=0;i<20;i++)
  {
    printf("\nenter marks : ");
    scanf("%d",&marks[i]);
  
  }
  for(i=0;i<20;i++)
  {
  sum=sum+marks[i];
  if(marks[i]>89)
  count++;
  }
 avg=sum/20;
 printf("average marks of students :%d",avg);
 printf("\nno. of students having marks more than 89 :%d",count);
 
 return(0);

}

