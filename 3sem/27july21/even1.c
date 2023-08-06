#include<stdio.h>
int main()
{
  int i;
 int ar[i],s, j;
 int m1=0,m2=0;
 printf("enter size of an array: ");
 scanf("%d",&s);
 
 printf("enter elements in the array: ");
 for(j=0;j<s;j++)
 {
   scanf("%d",&ar[j]);
   
 }
 printf("even numbers in the array ");
 for(j=0;j<s;j++)
 {
   if(ar[j]%2==0)
   {
    printf("%d\t",ar[j]);
   }
 }
 printf("odd numbers in the array ");
 for(j=0;j<s;j++)
 {
   if(ar[j]%2!=0)
   {
    printf("%d\t",ar[j]);
   }
 }
 return 0;
}
