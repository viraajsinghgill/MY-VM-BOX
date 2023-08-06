#include<iostream>
using namespace std;

int main()
{
  int t,n,i,flag=1;
  cout<<"enter a number";
 cin>>n;
  t=n/2;
  // for(i=2;i<=n/2;i++)
  for(i=2;i<=t;i++)
   {
    if(n%i==0)
    {
     flag=0;
     break;
    }
   
   }
  if(flag)
  cout<<"it is a prime number";
  else
  cout<<"not a prime number";
  return(0);

}
