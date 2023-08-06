#include<iostream>
using namespace std;
float pi=3.14;
void areavol(int r)
{  float a;
  a=pi*r*r;
  cout<<"area of circle="<<a<<endl;
}
void areavol(float r)
{  float v;
  v=(4/3)*pi*r*r*r;
  cout<<"volume of sphere ="<<v<<endl;
  
}
 int main()
 { int r;
 float a;
   cout<<"enter radius =";
   cin>>r;
   cout<<"radius for sphere =";
   cin>>a;
   
   areavol(r);
   areavol(a);
   return 0;
   
 
 }
