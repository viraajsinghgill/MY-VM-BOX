#include<stdio.h>
void display(int n,char ch)
{
 int i;
 for(i=0;i<n;i++)
 printf("%c",ch);
 
 printf("\n");
  return;
}
int main()
{
 int a=10,b=5;
 display(20,65);
 display('a',48);
 display('5','y');
 return(0);

}
