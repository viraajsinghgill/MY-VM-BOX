#include<iostream>
using namespace std;
int main()
{
  int s[6],i;
  for(i=0;i<6;i++)
  {
  cout<<"enter marks of subject "<<i+1<<":";
  cin>>s[i];
  }
  try
  {
  for(i=0;i<6;i++)
  {
     if(s[i]<40)
     {
       throw -1;
     }
     //else{cout<<"you have successfully passed this semseter";}
     
  }
 
  }
  catch(int x)
  {
  cout<<"you failed in this semester";
  }
  return 0;

}
