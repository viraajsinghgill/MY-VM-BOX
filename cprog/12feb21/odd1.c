#include<stdio.h>
int main()
{
  int sum=0,n,count=0,i;
  for(i=0;i<10;i++)
  {
    printf("\nenter the next number %d :",i);
    scanf("%d",&n);
   // if(n%2==1)
    //{
      //count++;
      //sum+=n;
    //}
    {count=count+n%2;
    sum=sum+(n%2)*n;}
  }
printf("sum of odd numbers = %d \nnumber of odd numbers =%d",sum,count);
return(0);
}
