#include<iostream>
using namespace std;
class add
{ int a,b;
  public:
  void input()
  {   //int a,b;
    cout<<"enter first number:"<<endl;
   cin>>a;
   cout<<"enter second number:"<<endl;
   cin>>b;

  }
  void output()
  {
    cout<<"addition of two numbers :"<<a+b;
    
  }

};
int main()
{
  add s1;
  s1.input();
  s1.output();
  
  return 0;
  

}
