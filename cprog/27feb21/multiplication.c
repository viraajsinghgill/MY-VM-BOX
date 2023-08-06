#include<stdio.h>
int multi(int a,int b)
{
  int t;
  if(a<b)
  return multi(b,a);
  else if(b!=0)
  return(a+multi(a,b-1));
   else 
   return(0);
}
int main()
{
 int n1,n2,r;
 printf("enter first number :");
 scanf("%d",&n1);
 printf("enter second number :");
 scanf("%d",&n2);
 r=multi(n1,n2);
 printf("product of two no. is :%d",r);
return(0);
}
