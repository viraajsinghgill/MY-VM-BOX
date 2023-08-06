#include<stdio.h>
int main()
{
   int r1,r2,r3,voltage,rs;
   float is,t,rp,ip;
   printf("enter the value of resistance 1 :");
   scanf("%d",&r1);
   printf("enter the value of resistance 2 :");
   scanf("%d",&r2);
   printf("enter the value of resistance 3 :");
   scanf("%d",&r3);
   
   printf("enter the value of voltage :");
   scanf("%d",&voltage);
   
   rs=r1+r2+r3;
   is=(float)voltage/rs;
   t=(float)1/r1+(float)1/r2+(float)1/r3;
   rp=1/t;
   ip=voltage/rp;
   printf("series resistance value calculated : %d",rs);
   printf("\ncurrent flowing in series resistance : %f",is);
   printf("\nparallel resistance calculated : %f",rp);
   printf("\ncurrent flowing in parallel resistance : %f",ip);
   return(0);
   
}
