#include<iostream>
using namespace std;

class shape
{
  public:
  double a,b;
  void getdata()
  {
  cout<<"enter your first parameter :"<<endl;
 cin>>a;
  cout<<" enter your second parameter :"<<endl;
  cin>>b;
  }
  virtual void displaydata()
  {  cout<<"in base class display\n";
  }
};
class rectangle : public shape
{

  public:
  void displaydata()
  {
    cout<<"area of rectangle :"<<a*b<<endl;
  }
  };
  class triangle : public shape
  {
    public: 
    void diplaydata()
    {
      cout<<"area of triangle:"<<0.5*a*b<<endl;
    }
    };
    int main()
    {  
      rectangle obj1;
      triangle obj2;
      cout<<"for triangle"<<endl;
      obj2.getdata();
       
      cout<<"for rectangle"<<endl;
       obj1.getdata();
       obj1.displaydata();
     obj2.displaydata();
       return 0;
       
    }
  
