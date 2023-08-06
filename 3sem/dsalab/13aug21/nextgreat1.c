#include<stdio.h>
int nextgreatest(int ar[],int n)
{
   for(int i=0;i<n;i++)
   {
     int next=-1;
     for(int j=i+1;j<n;j++)
     {
        if(ar[j]>ar[i])
        {
          next=ar[j];
          break;
        }
     }
     printf("%d\t",next);
        }

}
int main()
{
   int n,ar[20];
   printf("enter number of elements");
   scanf("%d",&n);
   
   for(int i=0;i<n;i++)
   scanf("%d",&ar[i]);
   
   //int s=sizeof(ar)/sizeof(ar[0]);
   nextgreatest(ar,n);
   
   return 0;

}
