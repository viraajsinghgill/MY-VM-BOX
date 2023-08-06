#include<stdio.h>
#include<math.h>

struct poly {
  float coeff;
  int exp;

};
struct poly a[50],b[50],c[50],d[50];

int main()
{
  int nterm1,nterm2,nterm3;
  
  int i,k=0,l=0,m=0;
  printf("enter the number of non zero terms in polynomial1:");
  scanf("%d",&nterm1);
  for(i=0;i<nterm1;i++)
  {
    printf("\nenter the coeff of %d th term",i);
    scanf("%f",&a[i].coeff);
    printf("\nenter the exp of %d th term",i);
    scanf("%d",&a[i].exp);
    
  } 
   printf("enter the number of non zero terms in polynomial2:");
  scanf("%d",&nterm2);
  for(i=0;i<nterm2;i++)
  {
    printf("\nenter the coeff of %d th term",i);
    scanf("%f",&b[i].coeff);
    printf("\nenter the exp of %d th term",i);
    scanf("%d",&b[i].exp);
    
  } 
   while(k<nterm1 && l<nterm1)
   {
     if(a[k].exp<b[l].exp)
     {
     c[m].coeff=a[k].coeff;
     c[m].exp=a[k].exp;
     m++;k++;
     }
     else if(a[k].exp>b[l].exp)
     {
       c[m].coeff=b[l].coeff;
       c[m].exp=b[l].exp;
       m++;l++;
     }
     else{
       c[m].coeff=a[k].coeff+b[l].coeff;
       c[m].exp=a[k].exp;
       k++;l++;m++;
    

           }
  }
    while(k<nterm1)
    {
     c[m].coeff=a[k].coeff;
     c[m].exp=a[k].exp;
     k++;m++;
    }
    while(l<nterm2)
    {
      c[m].coeff=b[l].coeff;
      c[m].exp=a[k].exp;
      k++;m++;
    }
  nterm3=m-1;
  printf("\npolynomial after addition =%.1f",c[0].coeff);
  for(i=1;i<nterm3;i++)
  printf("+%.1fx^%d",c[i].coeff,c[i].exp);
 
return 0;
}  
