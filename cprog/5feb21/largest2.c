#include<stdio.h>
int main()
{
   int a,b,c;
   printf("enter first number :");
   scanf("%d",&a);
   printf("enter second number :");
   scanf("%d",&b);
   c=(a>b)*a+b*(b>a);
   printf("largest no. is :%d",c);
   return(0);
   

}
