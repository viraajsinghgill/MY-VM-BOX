#include<stdio.h>
int find_max(int n)
{
  int next_num,largest=0,i;
  for(i=0;i<n;i++)
  {
   printf("\nenter next number");
   scanf("%d",&next_num);
   if(next_num>largest)
   largest=next_num;
   }
   return(largest);

}
int count_leader(int n)
{
  int next_num, leader=0,i,count=0;
  for(i=0;i<n;i++)
  {
   printf("\nenter next number :");
   scanf("%d",&next_num);
   if(next_num>leader)
   {
   leader=next_num;
   count++;  
  }
   }
  return(count);
}

int main()
{
  int a;
  a=find_max(10);
  printf("\n max is%d",a);
  a=count_leader(10);
  printf("\n no. of leaders are %d",a);
  
  
  return(0);


}
