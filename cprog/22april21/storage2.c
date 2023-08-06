#include<stdio.h>
int main()
{
  int b=5;
  {
    printf("%d",b);
    b++;
    {
      int b=9;
      printf("\n%d",b);
      b++;
    }
  
  }
printf("\n%d",b);
return(0);
}

