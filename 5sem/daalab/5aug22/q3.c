#include <stdio.h>
void compute(float number)
{
float sqrt = number / 2;
float temp = 0;
while (sqrt != temp)
{
temp = sqrt;
sqrt = (number / temp + temp) / 2;
}
printf("Result: %f\n", sqrt);
}
void main()
{
float n;
printf("Enter a number: ");
scanf("%f", &n);
compute(n);
}
