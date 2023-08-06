#include<stdio.h>
int prime(int m[],int n)
{ int i,j,count=0,c=0;
for(i=0;i<n;i++)
  { c=0;
   for(j=1;j<m[i];j++)
   {
  if(m[i]%j==0)
  c++;
  }
   if(c==1)
  count++;
}
 return count;
}

int main()
{
  int i,a,r,m[r],flag=1;
  printf("enter size :");
  scanf("%d",&r);
  for(i=0;i<r;i++)
  {
  printf("enter number :");
   scanf("%d",&m[i]);
  }
  a=prime(m,r);
  printf("no. of prime numbers %d",a);
  return(0);
}
