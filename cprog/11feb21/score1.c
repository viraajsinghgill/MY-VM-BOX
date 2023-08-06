#include<stdio.h>
int main()
{
  int score , count=1;
  float sum_score=0,avg_score;
  
  repeat:
  printf("\nenter the score of next player no %d=",count);
  scanf("%d",&score);
  sum_score+=score;
  count++;
  if(count<=11) 
  goto repeat;
  avg_score=sum_score/11;
  printf("total score=%f and average score=%f",sum_score,avg_score);
  return(0);
}
