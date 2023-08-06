#include<stdio.h>
int main()
{
  int i,item,m[10],pos=-1;
  printf("\nenter item :");
  scanf("%d",&item);
  for(i=0;i<10;i++)
  {
   printf("\nenter data :");
   scanf("%d",&m[i]);
  }
  
  for(i=0;i<10;i++)
  {
   if(item==m[i])
   {pos=i;
   break;}
  }
  if(pos==-1)
  printf("\nitem is not present :");
  else
  printf("item is present in position %d",pos);
}
