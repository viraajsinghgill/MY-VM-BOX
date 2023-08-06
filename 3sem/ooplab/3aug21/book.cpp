#include<iostream>
using namespace std;
struct book
{  int i,n;
  char author[25];
  char title [25];
  int price;
 // book a[10];
};
  
  
  void input()
  {  int n;
    // book a[];
   cout<<"enter how many numbers books you want to enter :";
   cin>>n;
   book a[n];
    for(int i=0;i<n;i++)
   {
       cout<<"enter author name :";
       cin>>a[i].author;
       cout<<"enter title :";
       cin>>a[i].title;
       cout<<"enter price of book";
       cin>>a[i].price;
       
       
   }
  for(int i=0;i<n;i++)
   {
    cout<<"author name :"<<a[i].author<<endl;
    cout<<"title       :"<<a[i].title<<endl;
    cout<<"price       :"<<a[i].price<<endl;
    }
  
  }
 /* void display()
  { input();
  for(i=0;i<n;i++)
   {
    cout<<"author name :"<<a[i].author<<endl;
    cout<<"title       :"<<a[i].title<<endl;
    cout<<"price       :"<<a[i].price<<endl;
    }
  }*/
  




int main()
{
  //struct book s1;
 input();
 // s1.display();
  return 0;
  

}
