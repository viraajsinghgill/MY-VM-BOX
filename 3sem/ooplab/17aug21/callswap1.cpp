#include<iostream>
using namespace std;
  void swapbyref(int x, int y)
  {
    int t;
    t=x;
    x=y;
    y=t;
    cout<<"swap by refernce "<<"x="<<x<<"\ny="<<y<<endl;
    //return 0;

  }
int main()
  { int x,y;
    cout<<"enter two numbers x and y ="<<endl;
    cin>>x>>y;
    swapbyref(x,y);
    return 0;
    
  
  }
