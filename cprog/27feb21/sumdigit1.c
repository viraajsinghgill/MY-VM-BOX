#include<stdio.h>
int sod(int n)
{
 if(n/10==0)
 return(n);
 else
 return(n%10 + sod(n/10));
 }
 int main()
 {
   int a,s;
   printf("\n enter number :");
   scanf("%d",&a);
   s=sod(a);
   printf("sum of digit of %d=%d",a,s);
   return(0);
   
 
 }
