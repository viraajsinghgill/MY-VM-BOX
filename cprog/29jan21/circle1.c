#define pi 3.14

#include<stdio.h>
int main()
{
   float r,ar, c;
   printf("enter radius of circle=");
   scanf("%f",&r);
   ar=pi*r*r;
   c=2*pi*r;
   printf("\narea of circle=%f",ar);
   printf("\ncircumference of circle=%f\n",c);
   return(0);
   
}
