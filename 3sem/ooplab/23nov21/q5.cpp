
#include <iostream>


using namespace std;
int n = 5;

template <class T>
class sortArray
{
public:
    void swap_(T *x, T *y)
    {
        T temp = *x;
        *x = *y;
        *y = temp;
    }
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

    void printArray(T arr[])
    {
        int i;
        for (i = 0; i < n - 1; i++)
        {
            cout << arr[i] << ", ";
        }

        cout << arr[n - 1] << endl;
    }
};

int main()
{
    int arr1[] = {2, 3, 9, 1, 5};
    float arr2[] = {1.1, 1.2, 0.3, 4.5, 1.5};
    sortArray<int> ob1;
    sortArray<float> ob2;
    ob1.sort(arr1);
    cout << "Sorted Array (Integer type) : ";
    ob1.printArray(arr1);
    cout << endl;
    ob2.sort(arr2);
    cout << "Sorted Array (Float type) : ";
    ob2.printArray(arr2);

    return 0;
}
