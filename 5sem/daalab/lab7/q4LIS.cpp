#include<iostream>

using namespace std;
 

int maxLenSub(int arr[], int n)
{

    int mls[n], max = 0;

     
    for (int i=0; i<n; i++)

        mls[i] = 1;

   
    for (int i=1; i<n; i++)

        for (int j=0; j<i; j++)

            if (abs(arr[i] - arr[j]) <= 1 &&

                    mls[i] < mls[j] + 1)

                mls[i] = mls[j] + 1;

    
    for (int i=0; i<n; i++)

        if (max < mls[i])

            max = mls[i];


    return max;        
}
 

int main()
{

    int arr[] = {6,7,8,3,4,5,9,10};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum length subsequence = "<< maxLenSub(arr, n);

    return 0;
} 
