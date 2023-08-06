#include<stdio.h>
void stat()
{
  static int m=1;
  m++;
  printf("%d\n",m);
}
int main()
{
 int i=1;
 for(;i<=3;i++)
 stat();
 
 return(0);

}
