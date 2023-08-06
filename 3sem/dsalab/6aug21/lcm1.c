#include<stdio.h>

int main()
{
  int max,a,b;
  printf("enter first positive integer :");
  scanf("%d",&a);
  printf("enter second positive integer :");
  scanf("%d",&b);
  max=(a>b)?a:b;
  while(1)
  {
   if(max%a==0 && max%b==0)
   {
   printf("lcm of %d and %d is = %d",a,b,max);
   break;
   }
   ++max;
  }
 // printf("lcm of %d and %d is = %d",a,b,g);
  return(0);

}
