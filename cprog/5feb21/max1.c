#include<stdio.h>
int main()
{
  int a,b,c,max;
  printf("enter three numbers");
  scanf("%d%d%d",&a,&b,&c);
  max=a;
  if(b>max)
  max=b;
  
  if(c>max)
  max=c;
  printf("\nthe largest no. is %d",max);
  return(0); 
}
