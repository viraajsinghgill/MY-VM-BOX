#include <stdio.h>
#include <time.h>
int main()
{
    int a[3][3], i, j, c = 0, s = 0, sum = 0, p = 1, Pro = 1;
    printf("Enter Elements for Matrix of Size 3*3:\n");
    for (j = 0; j <= 2; j++)
    {
        for (i = 0; i <= 2; i++)
        {
            scanf("%d", &a[j][i]);
        }
    }
    printf("\nMatrix of Size 3*3:\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
    for (j = 0; j <= 2; j++)
    {
        for (i = 0; i <= 2; i++)
        {
            if (a[j][i] != 0)
                c++;
        }
    }
    for (i = 0; i < 3; i++)
    {
        sum = sum + a[i][i];
        s = s + a[i][3 - i - 1];
    }
    for (i = 0; i < 3; i++)
    {
        Pro = Pro * a[i][i];
        p = p * a[i][3 - i - 1];
    }
    printf("\nNon Zeros Present in Above Matrix:%d\n", c);
    printf("The sum of the main diagonal is=%d\n", sum);
    printf("The sum of the off diagonal is=%d\n", s);
    printf("The Product of the main diagonal is=%d\n", Pro);
    printf("The Product of the off diagonal is=%d\n", p);
    return 0;
}
