#include <stdio.h>

int main()
{
    int arr[100], n, i, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i += 2)
    {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }

    printf("\nArray elements after swapping adjacent elements:\n");
    if(n % 2 == 0)
    {
        for (i = 0; i < n; i++)
        {
            printf("%d\n", arr[i]);
        }
    }
    else
    {
        for (i = 0; i < (n - 1); i++)
        {
            printf("%d\n", arr[i]);
        }
        printf("%d\n", arr[n]);
    }
    
    return 0;
}
