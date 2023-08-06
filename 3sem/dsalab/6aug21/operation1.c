#include<stdio.h>


/*int input();
void display(int n1, int n2, char ch, int result);
void add(int n1, int n2);
void subtract(int n1, int n2);
void multiply(int n1, int n2);
void divide(int n1, int n2);*/
int input()
{
  int n;
  printf("Enter number: ");
  scanf("%d",&n);
  return n;
}
void display(int n1, int n2, char ch, float result)
{
  printf("%d %c %d = %f\n", n1, ch, n2, result);
}


void add(int n1, int n2)
{
  int result;
  result = n1 + n2;
  display(n1, n2, '+', result);
}


void subtract(int n1, int n2)
{
 int result;
  result = n1 - n2;
  display(n1, n2, '-', result);
}


void multiply(int n1, int n2)
{
  int result;
  result = n1 * n2;
  display(n1, n2, '*', result);
}


void divide(int n1, int n2)
{
  float result;
  result = n1 / n2;
  display(n1, n2, '/', result);
}

int main()
{
  int n1, n2;
  n1 = input();
  n2 = input();

  add(n1, n2);
  subtract(n1, n2);
  multiply(n1, n2);
  divide(n1, n2);
  return 0;
}



