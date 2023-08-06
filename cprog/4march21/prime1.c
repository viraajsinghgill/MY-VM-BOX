#include<stdio.h>
void prime(int m[10])
{ int i,j,count=0,c=0;
for(i=0;i<10;i++)
  { c=0;
   for(j=2;j<m[i]/2;j++)
   {
  if(m[i]%j==0)
  c++;
  }
  // if(c==1)
  //count++;
}
 
  printf("no. of primr no %d",c);
}

int main()
{
  int i, m[10],flag=1;
  for(i=0;i<10;i++)
  {
  printf("enter number :");
   scanf("%d",&m[i]);
  }
  prime(m);
  
}
