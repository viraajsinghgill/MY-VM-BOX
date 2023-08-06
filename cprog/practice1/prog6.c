#include<stdio.h>
int main()
{
  int x[2]={30,31},*y,*z;
  z=y;
  *y++=*++z;
  (*y)++;
  printf("%d,%dn",x[0],x[1]);
return(0);
}
