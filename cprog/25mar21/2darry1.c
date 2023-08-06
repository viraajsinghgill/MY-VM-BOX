#include<stdio.h>
int main()
{
   int i,j,ar[4][3];
   for(i=0;i<4;i++)
   for(j=0;j<3;j++)
   {
   printf("\ndata for row no.%d &col no. %d =",i,j);
   scanf("%d",&ar[i][j]);
}
 printf(" 2d array :\n");
  for(i=0;i<4;i++)
  {
   for(j=0;j<3;j++)
   {
    printf("%d ",ar[i][j]);
    if(j==2)
    {
    printf("\n");
    }
   }
   }
return(0);
}
