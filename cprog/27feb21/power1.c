#include<stdio.h>
int power(int n1,int n2)
{
  if(n2!=0)
  return(n1*power(n1,n2-1));
  else return(1);

}
int main()
{
 int a,b,c;
 printf("enter the number :");
 scanf("%d",&a);
 printf("enter the power of no. :");
 scanf("%d",&b);
 c=power(a,b);
 printf("the result of %d^%d is%d",a,b,c);
 return(0);
}
