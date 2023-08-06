#include<stdio.h>
int main()
{
  float p,q,r,s;
  printf("enter value resistance 1 :");
  scanf("%f",&p);
  printf("enter value resistance 2 :");
  scanf("%f",&q);
  printf("enter value resistance 3 :");
  scanf("%f",&r);
  printf("enter value resistance 4 :");
  scanf("%f",&s);
  if (p*s==r*q)
  {printf("\nthe wheatstone bridge is balanced");
  return (0);
  }
  printf("\nthe wheatstone bridge is not balanced");
  s=q*r/p;
  printf("\nchoose=%f to balance the bridge",s);
  return(0);
  

}
