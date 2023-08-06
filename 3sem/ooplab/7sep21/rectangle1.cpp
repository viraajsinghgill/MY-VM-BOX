#include<iostream>
using namespace std;
class rectangle{
  private:
  int l,b,a;
  public:
  rectangle()
  
  {
    cout<<"enter length and breadth :";
    cin>>l>>b;
    a=l*b;
  }
  friend class area;

};
class area{
  private:
  int a;
  public:
  void showrectangle(rectangle&x){
  
     cout<<"area of rectangle="<<x.a;
  }
 
};
int main()
{
  rectangle r;
  area a;
  a.showrectangle(r);
  return 0;
  
}
