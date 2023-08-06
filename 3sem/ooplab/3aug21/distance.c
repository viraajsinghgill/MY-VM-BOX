#include <stdio.h>

struct distance
{
    int k;
    float m;
} total;

void display(struct distance dis1, struct distance dis2)
{
    total.k = dis1.k + dis2.k;
    total.m = dis1.m + dis2.m;

    while (total.m >= 1000)
    {
        total.m = total.m - 1000;
        total.k++;
    }

    printf("Total : %d Km, %.2f m\n", total.k, total.m);
}

int main()
{
    struct distance d1, d2;
    printf("Enter 1st distance in Km and m format : \n");
    scanf("%d %f", &d1.k, &d1.m);

    printf("Enter 2nd distance in Km and m format : \n");
    scanf("%d %f", &d2.k, &d2.m);

    display(d1, d2);
    return 0;
}
