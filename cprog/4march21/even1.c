#include<stdio.h>
void small(int m[10])
{
 int i,s=m[0];
 for(i=0;i<10;i++)
 {
   if(m[i]<m[0])
   s=m[i];
 }
printf("\nsmallest :%d",s);
}

int main()
{
  int i,count=0,m[10],cnt=0;
  for(i=0;i<10;i++)
  {
    printf("enter number :");
    scanf("%d",&m[i]);
    
  }
   for(i=0;i<10;i++)
   {
      if(m[i]%2==0)
      count++;
   }
   for(i=0;i<10;i++)
   {
      if(m[i]%2!=0)
      cnt++;
   }
   printf("\nno. of even num %d",count);
   printf("\nno. of odd no. %d",cnt);
   printf("\ndifference between no. of even and odd numbers %d",cnt-count);
  small(m);
  return(0);     
}
