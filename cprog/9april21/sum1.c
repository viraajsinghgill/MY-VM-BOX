#include<stdio.h>
int large_sum(int *a,int *b,int n)
{
int s1=0,s2=0,i;
for(i=0;i<n;i++)
{
 s1=s1+a[i];
 s2=s2+b[i];
}
 if(s1==s2)
 return 0;
 else if(s1>>s2)
return 1;

 else
return 2;
}
int main()
{
  int i,x[20] ,y[15],g;
  for(i=0;i<20;i++)
  {
   printf("enter element of array y :");
   scanf("%d",&x[i]);
     }
     for(i=0;i<15;i++)
  {
   printf("enter element of array x:");
   scanf("%d",&y[i]);
     }
     g=large_sum(x,y,10);
     
     if(!g)
     printf("both sum are equal");
     else if(g==1)
     printf("x is greater than y");
     else
     printf("y is greater than x");
     
     return(0);
     }
  
