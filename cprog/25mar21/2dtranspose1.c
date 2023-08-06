#include<stdio.h>
int main()
{
   int i,j,t,ar[4][4];
   for(i=0;i<4;i++)
   for(j=0;j<4;j++)
   {
   printf("\ndata for row no.%d &col no. %d =",i,j);
   scanf("%d",&ar[i][j]);
}
 printf(" 2d array :\n");
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
   for(i=0;i<3;i++)
  
   for(j=i+1;j<4;j++)
   {
    t=ar[i][j];
    ar[i][j]=ar[j][i];
    ar[j][i]=t;
     }
     
     
     printf(" transpose of 2d array :\n");
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


return(0);
}
