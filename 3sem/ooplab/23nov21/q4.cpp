
#include <iostream>

using namespace std;
int n = 5;

template <class T>
void swap_(T *x, T *y)
{
    T temp = *x;
    *x = *y;
    *y = temp;
}

template <class T>
void sort(T arr[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap_(&arr[j], &arr[j + 1]);
            }
        }
    }
}

template <class T>
void printArray(T arr[])
{
    int i;
    for (i = 0; i < n - 1; i++)
    {
        cout << arr[i] << ", ";
    }

    cout << arr[n - 1] << endl;
}

int main()
{
    int arr1[] = {2, 3, 9, 1, 5};
    float arr2[] = {1.1, 1.2, 0.3, 4.5, 1.5};
    sort<int>(arr1);
    cout << "Sorted Array (Integer type) : ";
    printArray<int>(arr1);
    cout << endl;
    sort<float>(arr2);
    cout << "Sorted Array (Float type) : ";
    printArray<float>(arr2);

    return 0;
}
