#include<stdio.h>
int main()
{
  int pt,st,pv,sv;
  printf("enter the primary voltage :");
  scanf("%d",&pv);
  printf("\nenter the number of primary turns :");
  scanf("%d",&pt);
  printf("\nenter the number of secondary turns :");
  scanf("%d",&st);
  sv=(pv*st)/pt;
  printf("\nsecondary voltage is %d",sv);
  return(0); 
}
