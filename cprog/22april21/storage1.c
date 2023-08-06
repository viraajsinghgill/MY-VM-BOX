#include<stdio.h>
int main()
{

  int a=5;
  {
    int a=10;
    printf("%d",a);
  
  }
  {
  a++;
    printf("\n%d",a);
    //a++;
  }
return(0);

}

