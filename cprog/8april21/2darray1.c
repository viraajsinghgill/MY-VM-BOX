#include<stdio.h>
int main()
{
  int b[4][4]={4,5,6,7,8,9,1,2,3,4,5,6};
  int *ptr=&b[0][0];
   for(int i=0;i<4;i++)
   {
     for(int j=0;j<4;j++)
     {
      printf(" %d",*(*(b+i)+j));
     
     }
printf("\n");
}
return(0);
}
