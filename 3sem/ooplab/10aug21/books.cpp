#include<iostream>
using namespace std;
class book
{  int i,n;
  char author[25];
  char title [25];
  int price;
  
  public:
  
  
  void input()
  {  int n;
   
   cout<<"enter how many numbers books you want to enter :";
   cin>>n;
   book a[n];
    for(i=0;i<n;i++)
   {
       cout<<"enter author name :";
       cin>>a[i].author;
       cout<<"enter title :";
       cin>>a[i].title;
       cout<<"enter price of book";
       cin>>a[i].price;
       
       
   }
  
  
 
  for(i=0;i<n;i++)
   {
    cout<<"author name :"<<a[i].author<<endl;
    cout<<"title       :"<<a[i].title<<endl;
    cout<<"price       :"<<a[i].price<<endl;
    }
  }
  


};

int main()
{
  book s1;
  s1.input();
  
  return 0;
  

}
