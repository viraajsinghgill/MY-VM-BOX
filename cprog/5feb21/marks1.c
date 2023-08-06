#include<stdio.h>
int main()
{
  int marks,age;
  printf("enter marks :");
  scanf("%d",&marks);
  printf("enter age :");
  scanf("%d",&age);
  marks=marks+40;
  if(age<50)
  marks=marks + 20;
  printf("\n the final marks :%d",marks);
  return(0);
  
}
