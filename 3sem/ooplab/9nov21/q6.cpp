#include<iostream>
using namespace std;

class abc
{
  public:
  virtual void display()=0;
 };
 class bbc: public abc
 {
  public:
  void display()
  {
   cout<<"In bbc class"<<endl;
  }
 };
 class kbc : public abc{
 public:
 void display()
 {
   cout<<"in kbc class"<<endl;
 }
 };
 int main()
 {
 abc *ptr1,*ptr2;
 bbc obb;
 
 kbc obc;
 ptr1=&obb;
 ptr2=&obc;
 
 ptr1->display();
 ptr2->display();
 return 0;
 }
