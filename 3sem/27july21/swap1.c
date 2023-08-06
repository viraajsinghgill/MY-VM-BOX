#include<stdio.h>
int main()
{

 int ar[6], j,t;
 int m1=0,m2=0;
 
 
 printf("enter elements in the array: ");
 for(j=0;j<6;j++)
 {
   scanf("%d",&ar[j]);
 }
 printf("your arry is %d",ar[j]);
 for(j=0;j<6;j++)
 {
 if(j%2==0)
 {  
  t=ar[j];
  ar[j]=ar[++j];
  ar[++j]=t;
 }
 
 }
printf("new arry is %d",ar[j]);
return 0;
}
