#include<stdio.h>
void swap(int *x,int *y)
{
 int t;
 t=*x;
 *x=*y;
 *y=t;
 
}

int main()
{
  int a,b;
  printf("enter the nmber want to swap :");
  scanf("%d %d",&a,&b);
  printf("before swapping a=%d , b=%d\n",a,b);
  swap(&a,&b);
  printf("after swapping \na=%d , b=%d",a,b);
return(0);

}
