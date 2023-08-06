#include<stdio.h>
int main()
{
  char *buffer="0123456789";
  char *ptr=buffer;
  ptr+=5;
  printf("%s\n",ptr);

return(0);
}
