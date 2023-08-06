#include<iostream>
using namespace std;
class base1{
public:
base1()
{cout<<"base1's constructor called"<<endl;}
};
class base2
{
public:
base2()
{cout<<"base2's constructor called"<<endl;}
};
class derived:public base1,public base2
{
  derived(){
  cout<<"derived constructer called"<<endl;
  }
  
};
int main()
{
derived d;
return 0;

}
