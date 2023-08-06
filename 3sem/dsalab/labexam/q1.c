#include<stdio.h>
main()
{
int i;
int *pi=&i;
scanf("%d",&pi);
printf("%d%d\n",i,*pi+5);
return 0;

}
