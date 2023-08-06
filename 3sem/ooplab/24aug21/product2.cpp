#include<iostream>
using namespace std;
class product
{
  char code[10], name[20];
  int p,q,n;
  int a[20];
  
  public:
 
  //   product a[10];
  void input()
    {  int i;
    cout<<"enter number of products you want to enter=";
   cin>>n;
   product a[n];
    for(i=1;i<=n;i++)
  {  cout<<"\nproduct "<<i<<endl;
     cout<<"enter code :";
     cin>>a[i].code;
     cout<<"\nenter product name :";
     cin>>a[i].name;
     cout<<"\nenter price :";
     cin>>a[i].p;
     cout<<"\nenter quantity :";
     cin>>a[i].q;
     
  } 
  cout<<"\nSI. NO.\t\t\tcode\t\t\tname\t\t\tprice\t\t\tquantity\t\t\ttotal"<<endl;
    cout<<"---------------------------------------------------------------------"<<endl;
    
 // cout<<"product"<<a[1].name;
   int s;
  
   // cout<<"\nSI. NO.\t\t\tcode\t\t\tname\t\t\tprice\t\t\tquantity\t\t\ttotal"<<endl;
    //cout<<"---------------------------------------------------------------------"<<endl;
    
    for(i=1;i<=n;i++)
    { 
    s=a[i].p*a[i].q;
      cout<<i<<"\t\t\t"<<a[i].code<<"\t\t\t"<<a[i].name<<"\t\t\t"<<a[i].p<<"\t\t\t"<<a[i].q<<"\t\t\t"<<s<<endl;
    }
  
  }

};
int main()
{
  product p1;
  p1.input();
 // p1.display();
  
  return 0;
}
