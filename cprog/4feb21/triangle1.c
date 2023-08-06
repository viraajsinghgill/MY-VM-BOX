#include<stdio.h>
int main()
{
   int a,b,c,t;
   printf("enter the first side of triangle :");
   scanf("%d",&a);
   printf("enter the second side of triangle :");
   scanf("%d",&b);
   printf("enter the third side of triangle :");
   scanf("%d",&c);
   t=((a+b)>c)&&((b+c>a))&&((c+a)>b);
   printf("\ndo they satisfy triangle property?1 for yes ,0 for no:%d",t);
   return(0);
   
}
