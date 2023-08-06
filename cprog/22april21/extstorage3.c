#include<stdio.h>
int x=21;
int main()
{
printf("\n%d%d",x,y);
return 0;
}
int y=31;
int x=21;
int main()
{
extern int y;
printf("\n%d%d",x,y);
return 0;
}
