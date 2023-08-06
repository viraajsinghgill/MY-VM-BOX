#include<stdio.h>
struct player
{
    char vi_naja[20];
    int vi_age;
    char vi_DOB[10];
} vi_p[19];

void input(int vi_n)
{
    printf("\nPLAYER %d\n", vi_n + 1);
    printf("Enter name: ");
    scanf("%s", vi_p[vi_n].vi_naja);
    printf("Enter age: ");
    scanf("%d", &vi_p[vi_n].vi_age);
    printf("Enter DOB in the format DD/MM/YY: ");
    scanf("%s", vi_p[vi_n].vi_DOB);
}
int main()
{
    int vi_i, vi_j = 1;
    for (vi_i = 0; vi_i < 7; vi_i++)
        input(vi_i);

    int p = (343 % 10) + 20;
    printf("\n");
    printf("\n\nSl no.\tName\tAge\tDOB (DD/MM/YY)\n");
    for (vi_i = 0; vi_i < 7; vi_i++)
    {
        if (vi_p[vi_i].vi_age > p)
        {
            printf("%d\t%s\t%d\t%s\n", vi_j, vi_p[vi_i].vi_naja, vi_p[vi_i].vi_age, vi_p[vi_i].vi_DOB);
            vi_j++;
        }
    }

    return 0;
}
