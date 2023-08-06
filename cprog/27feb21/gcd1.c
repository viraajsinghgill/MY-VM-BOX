#include<stdio.h>
int gcd(int n1,int n2)
{
  int t;
  if(n1%n2==0)
  return(n2);
  else
  return(t=gcd(n2,n1%n2));

}
int main()
{
  int g,a,b;
  printf("enter first positive integer :");
  scanf("%d",&a);
  printf("enter second positive integer :");
  scanf("%d",&b);
  g=gcd(a,b);
  //g=(a>b?gcd(a,b):gcd(b,a));
  printf("gcd of %d and %d is = %d",a,b,g);
  return(0);

}
