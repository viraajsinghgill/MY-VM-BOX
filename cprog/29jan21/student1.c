#include<stdio.h>
int main()
{
       float a,b,c,d,sum,avg;
       printf("enter marks of maths=");
       scanf("%f",&a);
       printf("\nenter marks of physics=");
       scanf("%f",&b);
       printf("\nenter marks of aec subject=");
       scanf("%f",&c);
       printf("\nenter marks of bee subject=");
       scanf("%f",&d);
       sum=a+b+c+d;
       avg=(a+b+c+d)/4;
       printf("\nsum of subjects=%f",sum);
       printf("\naverage of all subject=%f",avg);
       return(0);
}

