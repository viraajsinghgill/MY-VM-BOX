#include<iostream>
using namespace std;
int main()
{
  int a[50],i,n,large,small;
  cout<<"\nenter number of elements :";
  cin>>n;
  cout<<"\ninput the array of elements";
  for(i=0;i<n;i++)
  cin>>a[i];
  
  large=small=a[0];
  
  for(i=1;i<n;i++)
  {
    if(a[i]>large)
    large=a[i];
    
    if(a[i]<small)
    small=a[i];
    
    
  }
  cout<<"the smallest element is :"<<small<<endl;
  cout<<"the largest element id :"<<large<<endl;
  
  return 0;
  

}
