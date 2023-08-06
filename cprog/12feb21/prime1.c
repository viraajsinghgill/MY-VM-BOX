#include<stdio.h>
int main()
{
  int t,n,i,flag=1;
  printf("enter a number");
  scanf("%d",&n);
  t=n/2;
  // for(i=2;i<=n/2;i++)
  for(i=2;i<=t;i++)
   {
    if(n%i==0)
    {
     flag=0;
     break;
    }
   
   }
  if(flag)
  printf("it is a prime number");
  else
  printf("not a prime number");
  return(0);

}
