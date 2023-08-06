#include<stdio.h>
#include<math.h>
float a[50], b[50], c[50], d[50];
int main() 
{

  int i;
  int deg1,deg2; 
  int k=0,l=0,m=0;
  printf("Enter the highest degree of polynomial1: ");
  scanf("%d", &deg1);
  for(i=0; i<=deg1; i++) {
  printf("\nEnter the coeff of x^%d :", i);
  scanf("%f", &a[i]);
  } 
  printf("\nEnter the highest degree of polynomial2: ");
  scanf("%d", &deg2);
        for(i=0; i<=deg2; i++) 
        {
              printf("\nEnter the coeff of x^%d : ",i);
               scanf("%f", &b[i]);
        }
        printf("\nPolynomial 1 = %.1f",a[0]);
             for(i=1; i<=deg1; i++)
            printf("+ %.1fx^%d", a[i], i);
            printf("\nPolynomial 2 = %.1f", b[ 0]);
            for(i=1; i<=deg2; i++)
              printf("+ %.1fx^%d",b[i], i);
              
              return 0;
  }            
