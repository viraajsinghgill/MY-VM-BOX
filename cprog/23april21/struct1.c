#include<stdio.h>
int main()
{
  struct book{
    char name[20];
    float price;
    int pages;
  
  };
  struct book b1,b2;
  printf("\nenter name,prices&no. of pages 2 books\n");
  scanf("%s%f%d",b1.name,&b1.price,&b1.pages);
  scanf("%s%f%d",b2.name,&b2.price,&b2.pages);
  printf("\nand this is what you enterd ");
  printf("\n%s%f%d",b1.name,b1.price,b1.pages);
   printf("\n%s%f%d",b2.name,b2.price,b2.pages);
return(0);

}
