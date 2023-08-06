#include<stdio.h>
void swap(int x,int y)
{
  int t;
  t=x;
  x=y;
  y=t;
  printf("after swapping value of x and y are:%d,%d",x,y);

}
int main()
{
  int x,s,y;
  printf("enter two number to swap");
  scanf("%d %d",&x,&y);
  swap(x,y);
  //printf("after swaping numbers are %d,%d",x,y);
  return 0;
  }
