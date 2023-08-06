#include <iostream>
using namespace std;

template<class t1,class t2>
void sum(t1 a,t2 b) 
{
    cout<<"\nSum="<<a+b<<endl;
}

int main()
{
    int a,b;
    float x,y;
    cout<<"\nEnter two integer data: ";
    cin>>a>>b;
  
   sum(a,b); 
    return 0;
}
