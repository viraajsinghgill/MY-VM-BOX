#include <iostream>

using namespace std;
int n = 5;

template <typename T>
int search(T arr[], T key)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
            break;
        }
    }
    return 0;
  
}

int main()
{

    int arr1[n], key_in;
    double arr2[n], key_do;
    char arr3[n], key_ch;
    cout << "Enter the integers type numbers : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter the Double type numbers : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    cout << "Enter the Character type numbers : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr3[i];
    }
    cout << endl;
    cout << "Enter the key for Integer type : ";
    cin >> key_in;
    cout << "Position (Integer type) : " << search(arr1, key_in) << endl
         << endl;
    cout << "Enter the key for Double type : ";
    cin >> key_do;
    cout << "Position (Double type) : " << search(arr2, key_do) << endl
         << endl;
    cout << "Enter the key for Character type : ";
    cin >> key_ch;
    cout << "Position (Character type) : " << search(arr3, key_ch) << endl;
    return 0;
}
