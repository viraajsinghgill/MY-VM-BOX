#include<stdio.h>
int large_digit(int n)
{
 int m=n,t=0,lr=0;
 for(int i=0;i<n;i++)
 {
  if(m==0)
  break;
  else
  {
    t=m%10;
    if(t>lr)
    lr=t;
    m=m/10;
  }
 }
 return lr;
}
int main()
{
 int n;
 printf("enter the number ");
 scanf("%d",&n);
 int a=large_digit(n);
 printf("the largest digit is =%d",a);
 return(0);

}
