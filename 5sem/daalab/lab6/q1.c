#include <stdio.h>
int weight[] = {50, 5, 1000};
int price[] = {5000, 500000, 5000};
void Greedy_Knapsack(int M, int n)
{
    int curr_value;
    float total_value;
    int i, max;
    int used[n];
    for (i = 0; i < n; ++i)
        used[i] = 0;
    curr_value = M;
    while (curr_value > 0)
    {
        max = -1;
        for (i = 0; i < n; ++i)
            if ((used[i] == 0) &&
                ((max == -1) || (price[i] * 1.0 / weight[i] > price[max] * 1.0 / weight[max])))
                max = i;
        used[max] = 1;
        curr_value -= weight[max];
        total_value += price[max];
        if (curr_value >= 0)
            printf("Add object %d (%d, %d weight). Space left: %d.\n", max + 1, price[max], weight[max], curr_value);
        else
        {
            printf("Add object %d (%d, %d weight) of object %d.\n", (int)((1 + curr_value * 1.0 / weight[max]) * 100), price[max], weight[max], max + 1);
            total_value -= price[max];
            total_value += (1 + (float)curr_value / weight[max]) * price[max];
        }
    }
    printf("Filled the knapsack with items worth %.2f.\n", total_value);
}
int main()
{
    
    int M = 60;
    int n = 3;
    Greedy_Knapsack(M, n);
    return 0;
}
