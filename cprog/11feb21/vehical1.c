#include<stdio.h>
int main()
{
 int a;
 printf("\nenter the value of a :");
 scanf("%d",&a);
 if (a==0)
 printf("the vehicle moves with constant velocity ");
 else if(a>0)
 printf("vehical moves with accelerated velcoity ");
 else
 printf("the vehical move with deccelerated velocity");
 return(0);
 

}
