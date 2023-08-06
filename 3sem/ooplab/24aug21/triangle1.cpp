#include<iostream>
using namespace std;
class triangle
{
  float b[10],h[10];
  public:
  void getdata()
  
  {
  int i;
    for(i=1;i<=10;i++)
    {
  cout<<"enter base and hieght of triangle"<<i<<"=";
  cin>>b[i]>>h[i];
  }
  
  }
  void areatri()
  {
    float s;
    int i;
    for(i=1;i<=10;i++)
    {
    s=0.5*b[i]*h[i];
    cout<<"area of triangle "<<i<<"="<<s<<endl;
    }
  }

};
int main()
{
  triangle t1;
  t1.getdata();
  t1.areatri();
  
  return 0;
  

}
