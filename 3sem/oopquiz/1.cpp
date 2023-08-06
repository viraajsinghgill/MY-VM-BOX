#include<iostream>
using namespace std;
int main()
{
  const char* p="xyz";
  const char **q=&p;
  *q="pqr";
  const char *s=++p;
  p="abcde";
  cout<<*++s;
  return 0;
}
