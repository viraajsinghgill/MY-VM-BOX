#include<iostream>
using namespace std;
int main()
{
    int n;
  
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
  //  int ans[n];
    int total = 1;
    for (int i = 0; i < n; i++)
    {
        total *= arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<total/arr[i]<<endl;
    }
    return 0;
}
