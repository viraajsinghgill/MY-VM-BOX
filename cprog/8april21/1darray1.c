#include<stdio.h>
int main()
{
 int a[10]={5,9,1,7,2,0,3,4,6,8};
 printf("\n%d",&a);
 printf("\n%d",*&a);
 printf("\n%d",*a);
 printf("\n%d",*(a+1));
 printf("\n%d",*(a+9));
 return(0);
 }

