#include<stdio.h>
int main()
{
  int i,t,m[5];
  for(i=0;i<5;i++)
  {
   printf("enter num :");
   scanf("%d",&m[i]);
   
  }
  for(i=4;i>=0;i--)
  {
    
    printf("\t%d",m[i]);
  }
  return(0);
}
