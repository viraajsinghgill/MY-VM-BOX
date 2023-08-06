#include<stdio.h>
enum marital_status(single,married,divorced,widowed);
int main()
{

  enum marital_status person1,person2;
  person1=married;
  person2=single;
  printf("%d marital status",person1,"\t",person2);
  return(0);
  

}
