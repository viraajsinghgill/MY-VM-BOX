#include<stdio.h>
int main()
{
  int i,j,n,a=1;
   printf("enter range :");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     for(j=0;j<i+1;j++)
     printf("%d ",a++);
     for(j=0;j<n-1-i;j++)
     printf(" ");
     printf("\n");
     }
     return(0);
     }
