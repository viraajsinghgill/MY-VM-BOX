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
class square
{
 private:
 int s,a;
 public:
 square(){
    cout<<"enter side of square :";
    cin>>s;
    a=s*s;
 }
 friend class area;
 };
 class area
 {
   private:
   int a;
   public:
   void showrectangle(rectangle&x){
  
     cout<<"area of rectangle="<<x.a;
  }
   void showsquare(square&x)
   {
     cout<<"\narea of square :"<<x.a;
   }
 };
 int main()
 {
   rectangle r;
   square s;
  area a;
  a.showrectangle(r);
  a.showsquare(s);
  return 0;
 
 }
 
