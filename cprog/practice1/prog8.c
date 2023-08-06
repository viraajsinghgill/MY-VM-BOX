#include<stdio.h>
#include<string.h>
struct data{

int x;
int y;
};
int main()
{
  struct data d1,*d2;
  d1.x=10;
  d1.y=20;
  d2=&d1;
  printf("%d",d2.y);
  

return(0);
}
