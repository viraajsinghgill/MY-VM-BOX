#include<iostream>
using namespace std;
class circle
{
 public:
 int r;
 circle()
 {
  r=10;
 }
 void display()
 {
   cout<<"area of the circle is :"<<3.14*r*r<<endl;
 }
};
class rectangle: public circle
{
public:
int l=r,b;
rectangle(int g)
{
b=g;
}
void show()
{
cout<<"area of the rectangle:"<<l*b<<endl;
}
};
class cylinder: public circle
{
public:
int h;
cylinder(int g)
{
  h=g;
}
void volume()
{
cout<<"volume of cylinder :"<<3.14*r*h*r<<endl;
}
};
int main()
{
  rectangle s(5);
  s.display();
  s.show();
  cylinder c(3);
  c.display();
  c.volume();
  return 0;
}
