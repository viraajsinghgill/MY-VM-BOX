#include<stdio.h>
int main()
{
   int i,j,ar[4][4],a[4][4],t[4][4];
   for(i=0;i<4;i++)
   for(j=0;j<4;j++)
   {
   printf("\ndata for row no.%d &col no. %d =",i,j);
   scanf("%d",&ar[i][j]);
}
 printf("  1st 2d array :\n");
  for(i=0;i<4;i++)
  {
   for(j=0;j<4;j++)
   {
    printf("%d ",ar[i][j]);
    if(j==3)
    {
    printf("\n");
    }
   }
   }
   
   for(i=0;i<4;i++)
   for(j=0;j<4;j++)
   {
   printf("\ndata for row no.%d &col no. %d =",i,j);
   scanf("%d",&a[i][j]);
}
 printf(" 2nd 2d array :\n");
  for(i=0;i<4;i++)
  {
   for(j=0;j<4;j++)
   {
    printf("%d ",a[i][j]);
    if(j==3)
    {
    printf("\n");
    }
   }
   }
   
   
   printf(" addition of both array:\n");
    for(i=0;i<4;i++)
   for(j=0;j<4;j++)
   {
   t[i][j]=ar[i][j]+a[i][j];
   }
  for(i=0;i<4;i++)
  {
   for(j=0;j<4;j++)
   {
    printf("%d ",t[i][j]);
    if(j==3)
    {
    printf("\n");
    }
   }
   }
   return(0);
   }
   
