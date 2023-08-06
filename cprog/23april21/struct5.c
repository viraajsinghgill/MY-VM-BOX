#include<stdio.h>
int main()
{
struct book
{
 char name[20];
 float price;
 int pages;
 };
 struct book *ptr,b[5];
 int i;
 //int n;
 ptr=b;
//intf("%s%f%d",name,&price,&pages);
 for(i=0;i<5;i++)
 {
   printf("\nenter next book name ,price,and pages");
   scanf("%s%f%d",(ptr+i)->name,&(ptr+i)->price,&(ptr+i)->pages);
   
 }
 for(i=0;i<5;i++)
  
   printf("%s%f%d",(ptr+i)->name,(ptr+i)->price,(ptr+i)->pages);
   
   return(0);
 
 }
 
 
