#include<stdio.h>
int main()
{
  unsigned int a=60;
  unsigned int b=13;
  int c=0;
  
  c=a&b;
  printf("Line1-value of c is%d\n",c);
  
  c=a|b;
  printf("line2-value of c is%d\n",c);
  
  c=a^b;
  printf("line3-value of c is%d\n",c);
  
  c=~a;
  printf("line4-value of c is%d\n",c);
  
  c=a<<2;
  printf("line4-value of c is%d\n",c);
  
  c=a>>2;
  printf("line4-value of c is%d\n",c);
  
  return(0);
}
