#include<stdio.h>
int ascii(char c)
{
  int n=(int)c;
  return n;
  

}
int prim(int n)
{
 int c=0;
 for(int i=1;i<n;i++)
 {
 if(n%i=0)
 c++;
 }
if(c>1)
return 0;
else
return 1;
}
int main()
{
char c;
int n;
printf("enter char");
scanf("%c",&c);
printf("enter num");
scanf("%d",&n);


int a=ascii(c);
int b=prim(n);
if(b==1)
{
printf("prime\n");
else
printf("not prime\n");
}
printf("ascii char id %d",a);
return(0);
}
