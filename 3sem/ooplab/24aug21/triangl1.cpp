#include<iostream>
using namespace std ;
//int a[10];
class triangle
{
  float b,h;
 //int a[10] ,s[10];
  public:
  //riangle a[10],s[10];
  float a[10] ,s[10];
  void getdata()
  
  { 
    //triangle a[10],s[10];
   for(int i=1;i<=10;i++)
    {
    cout<<"enter base and hieght of triangle"<<i<<"=";
    cin>>a[i].b>>s[i].h;
                  
      }
      }
      void areatri()
      {
        for(int i=1;i<=10;i++)
        { 
          float d;
          d=0.5*a[i].b*s[i].h;
        cout<<"area of triangle "<<i<<"="<<d; 
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
