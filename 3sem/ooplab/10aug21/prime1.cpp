#include<iostream>
using namespace std;

int main()
{
 int a,b,i,flag;
 cout<<"\nenter start value :";
 cin>>a;
 cout<<"\nenter end value :";
 cin>>b;
 cout<<"\nprime numbers between "<<a<<"and"<<b<<"are:"<<endl;
 while(a<b)
 {
   flag=0;
   for(i=2;i<=a/2;++i)
   {
     if(a%i==0)
     {
     flag=1;
     break;
     }
   }
   if(flag==0)
   cout<<a<<" ";
   ++a;
 
 }
 return 0;
}
