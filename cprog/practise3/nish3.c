#include <stdio.h>
int isprime(int ri_a)
{
  int ri_f=0;
  for(int ri_i=2;ri_i<ri_a;ri_i++)
  {
    if(ri_a%ri_i==0)
    ri_f++;
  }
  if(ri_f==0)
  return 1;
}
int countprime(int ri_p,int ri_q)
{
  int ri_w=0;
  for(int ri_i=ri_p;ri_i<=ri_q;ri_i++)
  {
     if(isprime(ri_i));
     ri_w++;
  }
  return ri_w;
}


int main()
{
  printf("enter your roll no : ");
  long int ri_r;
  scanf("%ld",&ri_r);
  int ri_x,ri_y,ri_cnt;
  ri_x=(ri_r%10) + 10;
  ri_y=(ri_r%100) + 20;
  printf("\n\n");
  ri_cnt=countprime(ri_x,ri_y);
  printf("count = %d",ri_cnt);
  return 0;
}
