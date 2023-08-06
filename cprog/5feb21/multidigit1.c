#include<stdio.h>
int main()
{
   int a;
   printf("enter number :");
   scanf("%d",&a);
    if(a==0)
 {
   printf("invalid input");
  return(0);
  } 
   if(a<10 && a>-10)
   {printf("single digit");
   return(0);}
   if(a>=10)
   {
   printf("multi digit");
   return(0);
   }
   if(a<-9)
   {
   printf("multi digit");
   return(0);
   }
    

}
