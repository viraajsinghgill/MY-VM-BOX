#include<stdio.h>
#include<math.h>
#define pi 3.14
#define g 9.8

int main()
{
 int i;
 float t;
 printf("length\t\ttime period");
 for(i=10;i<=50;i=i+10)
  {
    t=2.0*pi*sqrt(i/g);
    printf("\n%d\t\t%f",i,t);
  
  }
  return(0);
}
