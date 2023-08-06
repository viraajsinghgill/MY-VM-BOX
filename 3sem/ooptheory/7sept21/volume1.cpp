#include<iostream>
using namespace std;
//#default pi 3.14
class volume
{
  int r,h,s;
public:
int cube(int a)
 { return a*a*a;
}
int cyl(float r,float h)
{
  return 3.14*r*r*h;
 }
 int sph(float r)
 {
 return (4/3)*3.14*r*r;
 }
 
 };
 int main()
 { volume v1;
   cout<<"volume of cube:"<<v1.cube(3);
   cout<<"\nvolume of cylender"<<v1.cyl(3,4);
   cout<<"\nvolume of sphere"<<v1.sph(5);
   
   return 0;
 }
 

