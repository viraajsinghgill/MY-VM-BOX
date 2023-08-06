#include<stdio.h>
int main()
{
 int p,c,m,b,e,per;
 printf("enter marks of physics:");
 scanf("%d",&p);
 printf("enter marks of maths:");
 scanf("%d",&m);
 printf("enter marks of chemistry:");
 scanf("%d",&c);
 printf("enter marks of eng:");
 scanf("%d",&e);
 printf("enter marks of bio:");
 scanf("%d",&b);
 per=(p+c+m+e+b)/5.0;
 if(per>=60)
 printf("first division:");
 else{
 if(per>=50)
 printf("second division");
 else{if(per>=40)
 printf("thord division");
 else 
 printf("fail");
 }
 }
 return(0);
 
}
