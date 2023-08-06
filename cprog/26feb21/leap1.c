#include<stdio.h>
int leap(int year)
{
 if((year%400==0||year%4==0)&&year%100!=0)
 printf("%d is a leap year\n",year);
 else
 printf("%d is not a leap year\n",year);
 return 0;
 

}
int main()
{
  int year;
  printf("enter year :");
  scanf("%d",&year);
  leap(year);
  return(0);

}
