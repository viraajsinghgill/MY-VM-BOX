#include<stdio.h>
int main()
{  int i;
 int ar[i],s, j;
 int m1=0,m2=0;
 printf("enter size of an array: ");
 scanf("%d",&s);
 
 printf("enter elements in the array: ");
 for(j=0;j<s;j++)
 {
   scanf("%d",&ar[j]);
 }
 for(j=0;j<s;j++)
 {
   if(ar[j]>m1)
   {
    m2=m1;
    m1=ar[j];
    
   }
   else if(ar[j]>m2 && ar[j]<m1)
   {
   m2=ar[j];
   }
 }
 printf("second largest number %d",m2);
}
