#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);
    printf("Enter the array elements: \n");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int temp;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("The second smallest element is %d \n", arr[n - 2]);
    printf("The second largest element is %d \n", arr[1]);
    return 0;
}
