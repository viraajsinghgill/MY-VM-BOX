#define col 5
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n,j,i,sum=0;
  int(*a)[col];
  printf("enter number of rows: ");
  scanf("%d",&n);
  a=(int(*)[col])malloc(n*col*sizeof(int));
  for(i=0;i<n;i++)
    for(j=0;j<col;++j)
  {  
    scanf("%d",&a[i][j]);
    sum+=a[i][j];
  }
  printf("sum of all elements of array %d",sum);
  return 0;
}
