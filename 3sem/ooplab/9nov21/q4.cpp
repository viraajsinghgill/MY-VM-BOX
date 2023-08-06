#include<iostream>
using namespace std;
class item
{

  int num,price;
  public:
  void get(int num,int price)
  {
    this->num=price;
    this->price=price;
  }
  void display()
  {
   cout<<"item number :"<<num<<endl;
   cout<<"item price :"<<price<<endl;
   
  }
};
int main()
  {
  int a,b;
  cout<<"enter the item number:"<<endl;
  cin>>a;
  cout<<"enter the item price :"<<endl;
  cin>>b;
  item ob,*ob1;
  ob.get(a,b);
  ob.display();
  ob1=&ob;
  ob1->get(a,b);
  ob1->display();
  
  return 0;
  

}
