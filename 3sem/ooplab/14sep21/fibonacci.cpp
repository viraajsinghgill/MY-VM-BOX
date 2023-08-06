#include<iostream>
using namespace std;

class fibonacci
{
private:
 int f0,f1,fib;
public:
fibonacci()
{
f0=0;
f1=1;
fib=f0+f1;
}
fibonacci (fibonacci &ptr)
{
f0=ptr.f0;
f1=ptr.f1;
fib=ptr.fib;
}
void increment()
{
f0=f1;
f1=fib;
fib=f0+f1;
}
void display()
{
cout << fib << "\t";
}
}; 
int main()
{ int n;
fibonacci n1;
cout<<"enter number for fibbonacci series :";
cin>>n;
for (int i=0; i<=n;i++)
{
 if(i==0)
 {
   cout<<"0"<<" ";
   cout<<"1"<<" "; 
 }
n1.display();
n1.increment();
}
return 0;

}
