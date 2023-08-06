#include <stdio.h>
int swap(int *a, int *b, int *c);
void main()
{
    int x, y, z;

    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    printf("Enter z: ");
    scanf("%d", &z);

    printf("Before Rotation: x: %d\ty: %d\tz: %d", x, y, z);
    swap(&x, &y, &z);
    printf("\nAfter Rotation: x: %d\ty: %d\tz: %d", x, y, z);
}
int swap(int *a, int *b, int *c)
{
    int temp;
    temp = *c;
    *c = *b;
    *b = *a;
    *a = temp;
}
