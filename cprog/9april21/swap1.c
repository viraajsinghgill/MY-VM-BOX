#include<stdio.h>
void swapbyref(int *x,int *y)
{
 int t;
 t=*x;
 *x=*y;
 *y=t;
 //printf("\nx=%d y=%d",*x,*y);
}

int main()
{
  int a,b;
  printf("enter the nmber want to swap :");
  scanf("%d %d",&a,&b);
  swapbyref(&a,&b);
  printf("\na=%d , b=%d",a,b);
return(0);

}
