#include<stdio.h>
int fibonacci(int n,int m)
{
  if(n==1||m==1)
  return(1);
  else
  if(n==2||m==2)
  return(1);
  else
  return(fibonacci(n-1)+fibonacci(n-2)||fibonacci(m-1)+fibonacci(m-2));
   
}
int main()
{
    int ro_roll_no, ro_a, ro_b;
    printf("Enter your roll num:- ");
    scanf("%d", &ro_roll_no);
    ro_a = (ro_roll_no % 10) + 1;
    ro_b = (ro_roll_no % 10) + 10;
   
    int ro_ans = fibonacci(ro_a,ro_b);
   // int i=fibonacci(ro_b);
    printf("%d", ro_ans);
    return 0;
}
