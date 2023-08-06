#include<iostream>
using namespace std;
class Base
{
   protected:
   int a;
   public:
     void getdata()
     {
         cout<<"Enter the value of a :";
         cin>>a;
     }
     void display()
     {
         cout<<"the value of a is : "<<a<<endl;
     }
};
class Derived : public Base
{
    int b;
    public:
    void getdata()
    {
         cout<<"Enter the value of b :";
         cin>>b;
    }
    void display()
    {
         cout<<"the value of b is : "<<a<<endl;
    }
};
int main(){
    Base b;
    Base * bptr;
    bptr=&b;
    bptr->getdata();
    bptr->display();
    Derived d;
    bptr=&d;
    bptr->getdata();
    bptr->display();

return 0;
}
