#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n, st, end;
    printf("Enter the limit : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Input Data(Range) : ");
    scanf("%d %d", &st, &end);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= st && arr[i] <= end)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
