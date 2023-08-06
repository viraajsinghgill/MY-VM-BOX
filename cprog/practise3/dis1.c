#include <stdio.h>

int fib(int vi_n)
{
    if (vi_n <= 1)
        return vi_n;
    return fib(vi_n - 1) + fib(vi_n - 2);
}

int vi_sum(int vi_arr[]){
    int vi_sum = 0;
    for (int vi_i = 0; vi_i < 100 && vi_arr[vi_i] != 0;vi_i++){
        vi_sum += vi_arr[vi_i];
    }
    return vi_sum;
}

int main()
{
    int vi_roll;
    printf("Enter your dh_roll number : ");
    scanf("%d", &vi_roll);
    int m = (vi_roll % 10) + 1 , vi_n = (vi_roll % 10) + 10;

    int vi_arr[100] = {0};
    for (int vi_i = m; vi_i <= vi_n; vi_i++)
        vi_arr[vi_i - m] = fib(vi_i);

    printf("Sequence : ");
    for (int vi_i = 1; vi_i < 100 && vi_arr[vi_i]!=0 ; vi_i++){
        printf("%d ", vi_arr[vi_i]);
    }
    printf("\nSum : %d", vi_sum(vi_arr));
    return 0;
}
