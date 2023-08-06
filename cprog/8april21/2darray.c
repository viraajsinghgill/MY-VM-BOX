#include<stdio.h>
int  main()
{
 int b[4][3]={5,9,7,1,2,0,3,4,6,8,2,7};
 int *ptr=&b[0][0];
 int a,e;
  printf("enter thebposition you want to enter to search ");
  scanf("%d%d",&a,&e);
  int value=*(*(b+a)+e);
  printf("number is %d",value);
  return(0);
  
  
  
  
  
  
}
