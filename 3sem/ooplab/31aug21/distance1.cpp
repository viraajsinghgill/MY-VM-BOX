#include<iostream>
using namespace std;
class distance
{
  public:
  int inch,feet;
  void input(){
  cout<<"enter the values :";
  cin>>inch>>feet;
  
}
void display()
{
  cout<<"INCH:\t"<<inch<<"\nfeet :"<<feet<<endl;
 
}
  void add(distance d1,distance d2);
  };
  void distance::add(distance d1,distance d2)
    { 
    inch=d1.inch+d2.inch;
    feet=d1.feet+d2.feet;
    cout<<"sum:\t"<<feet<<"'"<<inch<<endl;
    }
     
  
  int main()
  {  
  distance d1,d2,d3;
    d1.input();
    d2.input();
    d1.display();
    d2.display();
    d3.add(d1,d2);
    return 0;
  }

