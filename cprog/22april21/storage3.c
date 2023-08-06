#include<stdio.h>
void function1(void)
{
 int m=20;
 printf("%d\n",m);
}
void function2()
{
 int m=30;
 function1();
 printf("%d\n",m);
}
int main()
{
  int m=10;
  function2();
  printf("%d\n",m);
  return 0;

}
