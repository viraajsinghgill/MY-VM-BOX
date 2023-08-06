#include <stdio.h>
#include <stdlib.h>

int *create_polynomial(int degree) {
  int size = degree + 1;
  int *p = (int *)malloc(size * sizeof(int));
  int i = 0;
  for (i = 0; i < size; i++) {
    printf("Enter n in (n)x^%d: ", i);
    scanf("%d", &p[i]);
  }
  printf("\n");
  return p;
}

/* only works for linear degree of divisor */
void divide_polynomial(int deg1, int deg2, int *p1, int *p2) {
  int size = 0, i = 0, diff = 0, n = 0;
  int *divident = NULL, *divisor = NULL, *quotient = NULL;
  int remainder = 0;
  if (deg1 > deg2) {
    divident = p1;
    divisor = p2;
    size = (deg1 - deg2) + 1;
    n = deg1 + 1;
  } else {
    divident = p2;
    divisor = p1;
    size = (deg2 - deg1) + 1;
    n = deg2 + 1;
  }
  quotient = (int *)malloc(size * sizeof(int));
  for (i = n - 1; i >= 0; i--) {
    diff = divident[i] + (diff * (-divisor[0]));
    if (i == 0) {
      remainder = diff;
      break;
    }
    quotient[i - 1] = diff;
  }
  // print result
  printf("Quotient: ");
  for (int i = size - 1; i >= 0; i--) {
    printf("%dx^%d ", quotient[i], i);
  }
  printf("\nremainder= %d\n", remainder);
}

int main() {
  int deg1 = 2, deg2 = 1;
  int *p1 = create_polynomial(deg1);
  int *p2 = create_polynomial(deg2);
  divide_polynomial(deg1, deg2, p1, p2);
  return 0;
}
