#include<stdio.h>
#include<stdlib.h>
int main()
{
   int n,i,*ptr,sum=0;
   printf("enter number of elements of array:");
   scanf("%d",&n);
   ptr=(int*)malloc(n*sizeof(int));
   printf("enter elements of array:");
   
   for(i=0;i<n;++i)
   {
   
   
   scanf("%d",ptr+i);
   sum+=*(ptr+i);
   
   }
   printf("sum=%d",sum);
   free(ptr);
   return(0);
   
}
