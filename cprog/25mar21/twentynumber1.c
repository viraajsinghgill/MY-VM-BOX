
#include<stdio.h>
int main()
{
  int i,ar[20],pos=0,neg=0,zer=0,even=0,odd=0;
  for(i=0;i<20;i++)
  {
    printf("enter a num :");
    scanf("%d",&ar[i]);
  }
   for(i=0;i<20;i++)
   {
   if(ar[i]>0)
   pos++;
   if(ar[i]<0)
   neg++;
   if(ar[i]==0)
    zer++;
    
    if(ar[i]%2==0)
    even++;
    else 
    odd++;
    }
    printf("\n\ndata contain %d positive , %d negative, %d zeros, %d even and %d odd num",pos,neg,zer,even,odd);
return(0);
}
