#include<stdio.h>
#include<ctype.h>
void tolower(char ch)
{
  if(ch<65 || ch>91)
  {
   printf("%c\n",ch);
   return;
  }
  char lowerchar=ch+32;
  printf("%c\n",lowerchar);
}
void toupper(char ch)
{
if(ch<97 || ch>122)
  {
   printf("%c\n",ch);
   return;
  }
  char lowerchar=ch-32;
  printf("%c\n",lowerchar);
}
int main()
{
  char ch;
  printf("enter charecter :%c",ch);
  scanf("%c",&ch);
  
  if(ch<65 || ch>91)
  tolower(ch);
  else
  toupper(ch);
  return(0);
  }  
  



