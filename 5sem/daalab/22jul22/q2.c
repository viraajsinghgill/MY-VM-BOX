#include <stdio.h>
#include <limits.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    // clock_t start, end;
    // start = clock();
    int arr[100];
    int i, j, maxCount, maxElement, Count = 0, Count1;
    maxCount = 0;
    for (i = 0; i < 100; i++)
    {
        arr[i] = rand() % 100;
    }
    printf("\nThe Array Elements are :\n");
    for (int i = 0; i < 100; i++)
    {
        printf("%d\t", arr[i]);
    }
    int length = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < length; i++)
    {
        for (j = i + 1; j < length; j++)
        {
            if (arr[i] == arr[j])
            {
                Count++;
                break;
            }
        }
    }
    for (i = 0; i < length; i++)
    {
        Count1 = 1;
        for (j = i + 1; j < length; j++)
        {
            if (arr[j] == arr[i])
            {
                Count1++;
                if (Count1 > maxCount)
                {
                    maxCount = Count1;
                    maxElement = arr[j];
                }
            }
        }
    }
    // end = clock();
    printf("Total number of duplicate element found in array=%d\n", Count);
    printf("Maximum Repeating Element:%d\nCount:%d\n", maxElement, maxCount);
    // printf("Total time taken is %f\n", (double)(end - start) / CLOCKS_PER_SEC);
    return 0;
}
