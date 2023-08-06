#include<iostream>
using namespace std;

int gcd(int n1,int n2)
{
  int t;
  if(n1%n2==0)
  return(n2);
  else
  return(t=gcd(n2,n1%n2));

}
int main()
{
  int g,a,b;
 cout<<"enter first positive integer :";
  cin>>a;
  cout<<"enter second positive integer :";
  cin>>b;
  g=gcd(a,b);
  //g=(a>b?gcd(a,b):gcd(b,a));
  cout<<"gcd of"<<a<<"and"<<b<<"is :"<<g<<endl;
  return(0);

}
