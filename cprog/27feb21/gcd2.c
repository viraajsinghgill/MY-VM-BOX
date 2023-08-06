#include<stdio.h>
int gcd(int n1,int n2)
{
  int t;
  return(n1%n2?t=gcd(n2,n1%n2):n2);
}
int main()
{
  int g1,g2,g3,a,b,c;
  printf("enter first positive integer :");
  scanf("%d",&a);
  printf("enter second positive integer :");
  scanf("%d",&b);
  printf("enter third positive integer :");
  scanf("%d",&c);
  //g=gcd(a,b);
  g1=(a>b?gcd(a,b):gcd(b,a));
  g2=(a>b?gcd(b,c):gcd(c,b));
  g3=(g1>g2?gcd(g1,g2):gcd(g2,g1));
  printf("gcd of %d , %d and %d is = %d",a,b,c,g3);
  return(0);

}
