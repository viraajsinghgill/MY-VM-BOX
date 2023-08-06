#include<stdio.h>
int main()
{
  int a,b,c,t;
  
  printf("enter the first side :");
  scanf("%d",&a);
  printf("enter the second side :");
  scanf("%d",&b);
  printf("enter the third side :");
  scanf("%d",&c);
  
  t=(c*c==(b*b)+(a*a))&&(c*c==(a*a)+(b*b));
  printf("\n1 if input are sides of right angled triangle else 0  =%d",t);
  printf("\n");
  return(0);

}
