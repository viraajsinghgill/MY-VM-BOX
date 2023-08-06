#include<stdio.h>
int main()
{
char i;
  char ch;
  printf("enter the charecter: %c",ch);
  scanf("%c",&ch);
  if(ch<98&&ch>64)
  i=ch+32;
  else
  i=ch-32;
  printf("the opp case is :%c",i);
  return(0);

}
