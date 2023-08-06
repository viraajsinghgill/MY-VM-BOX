#include<iostream>
using namespace std;
void sum(int x,int y=10,int z=20)
{ cout<<"sunmtion is="<<x+y+z<<endl;
  //return(x+y+z);

}
int main()
 {  int x,y,z;
   cout<<"enter number x=";
   cin>>x;
   cout<<"enter number x=";
   cin>>y;
   cout<<"enter number x=";
   cin>>z;
   sum(x);
   sum(x,y);
   sum(x,y,z);
   return 0;
   
 }
