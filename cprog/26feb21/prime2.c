#include<stdio.h>
int main()
{
  int n,i;
  printf("enter a number");
  scanf("%d",&n);
  
   for(i=2;i<=n/2;i++)
  //for(i=2;i<=t;i++)
   {
    if(n%i==0)
    {
     return 0;
     break;
     
    }
   
   }
  if(n==2)
  printf("it is a prime number");
  else
  printf("not a prime number");
  return(0);

}
