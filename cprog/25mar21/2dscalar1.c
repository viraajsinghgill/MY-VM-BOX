#include<stdio.h>
int main()
{
   int i,j,t,ar[4][4];
   for(i=0;i<3;i++)
   for(j=0;j<4;j++)
   {
   printf("\ndata for row no.%d &col no. %d =",i,j);
   scanf("%d",&ar[i][j]);
}
 printf(" 2d array :\n");
  for(i=0;i<3;i++)
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
   printf("input a no. to multiply :");
   scanf("%d",&t);
   printf(" after multiplication 2d array :\n");
  for(i=0;i<3;i++)
  {
   for(j=0;j<4;j++)
   {
    ar[i][j]*=t;
    printf("%d ",ar[i][j]);
   if(j==3)
    {
    printf("\n");
    }
   }
   }
   
   return(0);
 }
