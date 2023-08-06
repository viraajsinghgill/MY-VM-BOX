#include<iostream>
using namespace std;
class test{
public:
 test()
 {cout<<"test constructer called";}
};
int main()
{
test t1;
test *t2;
return 0;
}
