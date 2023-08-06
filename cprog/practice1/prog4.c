#include<stdio.h>
char* myfunc(char *ptr)
{
 ptr+=3;
 return(ptr);
 
}
int main()
{
  char *x,*y;
  x="hello";
  y=myfunc(x);
  printf("y=%s\n",y);
  

return(0);
}
