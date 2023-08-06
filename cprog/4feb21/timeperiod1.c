#include<stdio.h>
#include<math.h>
#define g 9.8
int main()
{
  float t1,t2,t3,t4,t5;
  int l1,l2,l3,l4,l5;
  
  printf("\nlength\t\t\t\ttime period");
  l1=10;
  t1=2*3.14*sqrt(l1/g);
  printf("\n%d\t\t\t\t%f",l1,t1);
  
  l2=20;
  t2=2*3.14*sqrt(l2/g);
  printf("\n%d\t\t\t\t%f",l2,t2);
  
  l3=30;
  t3=2*3.14*sqrt(l3/g);
  printf("\n%d\t\t\t\t%f",l3,t3);
  
  l4=40;
  t4=2*3.14*sqrt(l4/g);
  printf("\n%d\t\t\t\t%f",l1,t1);
  printf("\n");
  return(0);
  

}
