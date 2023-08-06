#include<stdio.h>
float find_max(float n)
{
  int i;
  float next_num,largest=0;
  for(i=0;i<n;i++)
  {
   printf("\nenter next number");
   scanf("%f",&next_num);
   if(next_num>largest)
   largest=next_num;
   }
   return(largest);

}
int main()
{
  float a;
  a=find_max(10);
  printf("\n max is%f",a);
  printf("\nmax is :%f",find_max(15));
  
  
  return(0);


}
