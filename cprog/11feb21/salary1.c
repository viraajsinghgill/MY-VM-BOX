#include<stdio.h>
int main()
{
   
   float hra,bs,da,gs;
   printf("enter your basic salary :");
   scanf("%f",&bs);
   if(bs<1500)
   {
     hra=bs*10/100;
     da=bs*40/100 ;  
   }
   else
   {
     hra=500;
     da=bs*50/100;
   
   }
   gs=bs+hra+da;
   printf("your gross salary is :%f",gs);
   return(0);
}
