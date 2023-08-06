#include<stdio.h>
int main()
{
   float x1,y1,x2,y2,m1,g,x3,x4,y3,y4,m2;
   printf("enter the one point x1 and y1:");
   scanf("%f%f",&x1,&y1);
   printf("\nenter other point x2 & y2 :");
   scanf("%f%f",&x2,&y2);
   m1=(y2-y1)/(x2-x1);
   printf("\nthe slope of the line 1 is %f",m1);
  
   
   printf("\nenter the one point x3 and y3:");
   scanf("%f%f",&x3,&y3);
   printf("\nenter other point x4 & y4 :");
   scanf("%f%f",&x4,&y4);
   m2=(y4-y3)/(x4-x3);
   printf("\nthe slope of the line 2 is %f",m2);
   g=(m1==m2)&&(m2==m1);
   printf("\n(display: 0 for not parallel , 1 for parallel)\n here is pparallel  :%f",g);
   return(0);
}
