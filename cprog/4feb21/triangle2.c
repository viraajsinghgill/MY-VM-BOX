#include<stdio.h>
int main()
{
   int a,b,c,t,s;
   printf("enter the first side of triangle :");
   scanf("%d",&a);
   printf("enter the second side of triangle :");
   scanf("%d",&b);
   printf("enter the third side of triangle :");
   scanf("%d",&c);
   t=((a+b)>c)&&((b+c>a))&&((c+a)>b);
   s=t*(a+b+c);
   printf("\ndo they satisfy triangle property?1 for yes ,0 for no:");
   printf("sum of all sides : %d",s);
   return(0);
   
}
