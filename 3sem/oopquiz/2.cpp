#include<iostream>
using namespace std;
class b1{
public:
void display()
{  cout<<"inside b1";
}
};
class b2:public b1{
 public:
 void display(){cout<<"inside b2";}
};
class derived:public b2{};
int main(void)
{
  derived d1;
  d1.display();
  return 0;
  
}
