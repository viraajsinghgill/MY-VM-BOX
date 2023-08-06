#include<stdio.h>
int main()
{
  int score ,i=1, count=1;
  
  
  again:
  printf("\nenter the score of next player no %d=",count);
  scanf("%d",&score);
  if(score<0)
  
  goto again;
  count++;
    if(score>=100)
    
  i++;
  if(i<=11)
 
  goto again;
  printf("total no. of players made century =%d",count);
  return(0);
}
