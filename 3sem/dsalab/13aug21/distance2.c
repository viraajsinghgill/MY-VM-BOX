#include<stdio.h>
struct distance
{
  int k;
  float m;  

}dis1,dis2,total;
int main()
{
  struct distance *d1,*d2,*t;
  d1=&dis1;
  d2=&dis2;
  t=&total;
   printf("Enter 1st distance in Km and m format : \n");
    scanf("%d %f", &d1->k, &d1->m);

    printf("Enter 2nd distance in Km and m format : \n");
    scanf("%d %f", &d2->k, &d2->m);
    t->k=d1->k+d2->k;
     t->m=d1->m+d2->m;
       while (t->m >= 1000)
    {
        t->m =t->m - 1000;
        t->k++;
    }

    printf("Total : %d Km, %.2f m\n", t->k, t->m);
return 0;
}
    
  

