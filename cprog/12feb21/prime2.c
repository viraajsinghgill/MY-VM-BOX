#include<stdio.h>
int main()
{
  int n,i,c=0 ,t=0;
  for(n=10;n<=100;n++)
 { 
 t=n/2;
  for(i=2;i<=t;i++)
   {
    if(n%i==0)
    {
    c++;
        
    break;
    }
    }
    if(c==0)
    printf("%d\n",n);
   
    
  c=0;
  t=0;
    }
    
  return 0;

}
