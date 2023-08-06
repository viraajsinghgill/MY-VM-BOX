#include<iostream>
using namespace std;
int main()
{
  int  i,n;
  long sum=0;
  long int t=1;
  cout<<"input the numbers of terms :";
  cin>>n;
  for(i=1;i<=n;i++)
  {
   cout<<t;
   if(i<n)
   {
     cout<<"+ ";
        }
  sum=sum+t;
  t=(t*10)+1;
  
  }
  cout<<"\nsum is :"<<sum;
  
  return 0;
  

}
