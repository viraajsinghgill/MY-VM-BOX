#define g 9.8
#include<stdio.h>
int main()
{
   int u,t;
   float v,s;
   printf("give the value of initial velocity :");
   scanf("%d",&u);
   t=1;
   v=u+g*t;
   s=u+g*t*t/2;
   printf("\n velocity =%fm/s \ndistance coverd=%fm after 1s",v,s);
   t++;
   v=u+g*t;
   s=u+g*t*t/2;
   printf("\n velocity =%fm/s \ndistance coverd=%fm after 2s",v,s);
   t++;
   v=u+g*t;
   s=u+g*t*t/2;
   printf("\n velocity =%fm/s \ndistance coverd=%fm after 3s",v,s);
   t++;
   v=u+g*t;
   s=u+g*t*t/2;
   printf("\n velocity =%fm/s \ndistance coverd=%fm after 4s",v,s);
   t++;
   v=u+g*t;
   s=u+g*t*t/2;
   printf("\n velocity =%fm/s \ndistance coverd=%fm after 5s",v,s);
   return(0);
   


}
