#include<stdio.h>
int fibonacci(int n)
{
  if(n==1)
  return(1);
  else
  if(n==2)
  return(1);
  else
  return(fibonacci(n-1)+fibonacci(n-2));
  

}
int main()
{
  int a,f;
  printf("\nenter any no.");
  scanf("%d",&a);
  f=fibonacci(a);
  printf("the fibonacci number of %d = %d",a,f);
  return(0);


}
