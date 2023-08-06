#include<stdio.h>
float convert(float c)
{
   float f;
   f=(c*9/5);
   return f;
}
 int main()
 {
  float c,t;
  printf("ennter temp in celcius :");
  scanf("%f",&c);
  t=convert(c);
  printf("\ntemp in fehranite if %f",t);
 
 
 }
