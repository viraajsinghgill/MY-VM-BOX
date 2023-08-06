#include<stdio.h>
int main()
{
 int prime(int);
 int n,i;
 int temp;
 printf("enter the value of n:");
 scanf("%d",&n);
 printf("prime no. between 1 and %d are:\n",n);
 for(i=2;i<=n;i++)
 {
 temp=prime(i);
 if(temp==-99)
 continue;
 else
 printf("%d\t",i);
 }
return(0);
}
