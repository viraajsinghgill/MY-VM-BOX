#include<stdio.h>
int x=21;
void disp()
{
  int x=22;
  printf("\n%d",x);
}
int main()
{ //int x;
disp();
printf("\n %d",x);
return(0);
}
