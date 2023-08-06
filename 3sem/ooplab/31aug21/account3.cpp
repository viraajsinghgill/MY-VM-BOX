#include<iostream>
using namespace std;
class account
{
 char name[30];
 char type[10];
 long int an;
 int balam;
 int n;
 public:
 void input();
 void deposit();
 void withdraw();
 void display();
 cout<<"enter number of person detail you want to ente :";
    cin>>n;
    account a[n];
 };
  void account::input()
  {int i;
    //cout<<"enter number of person detail you want to ente :";
    //cin>>n;
    //account a[n];
    for(i=0;i<n;i++)
    {
    cout<<"name of depositor";
    cin>>a[i].name;
    cout<<"enter account number :";
    cin>>a[i].an;
    cout<<"type of account current/saving :";
    cin>>a[i].type;
   
    cout<<"enter balance :";
    cin>>a[i].balam;
    
  }
  }
  void account::deposit()
  {  
    int m;
    long int s;
    cout<<"enter account number in which you want to deposit money :";
    cin>>s;
    //account a[n];
    
    for(int i=0;i<n;i++)
    { 
      if(a[i].an==s)
      {
    cout<<"enter the amount of money you want to deposit in INR";
    cin>>m;
    a[i].balam+=m;
    cout<<"your amount is succesfully deposited and your current balance is:"<<a[i].balam;
    }
    else 
    cout<<"account number doesnot exist";
     }   
  }
  
  void account::withdraw()
  {   
    int m;
    long int s;
    cout<<"enter account number in which you want to deposit money :";
    cin>>s;
    // account a[n];
    for(int i=0;i<n;i++)
    { 
      if(a[i].an==s)
      {
    cout<<"enter the amount of money you want to withdraw in INR";
    cin>>m;
       if(a[i].balam<m)
       {
        a[i].balam-=m;
        cout<<"you have succesfully withdrawn your amount and your current balance is :"<<a[i].balam;
        
       }
       else 
       cout<<"insufficient balance";
  }
  else
  cout<<"account number does not exist ";
  
}
    
}
    void account::display()
    {
      long int s;
    cout<<"enter account number in which you want to deposit money :";
    cin>>s;
   //  account a[n];
     for(int i=0;i<n;i++)
    { 
      if(a[i].an==s)
      {
        cout<<"name :"<<a[i].name;
        cout<<"your balance :"<<a[i].balam;
       }
  else
  cout<<"account number does not exist ";
      
    }
}

int main()
{  int w;
   account a1;
   a1.input();
   cout<<"PRESS 1:TO DEPOSIT AN AMOUNT";
   cout<<"\nPRESS 2:to withdraw an amount after checking";
   cout<<"\nPRESS 3:to display name and account number";
   cout<<"\nenter number 1/2/3 you want to enter ";
   cin>>w;
   if(w==1)
   {
     a1.deposit();
   }
   else if(w==2)
   {
     a1.withdraw();
   }
   else if(w==3)
   {
     a1.display();
   }
   else
   cout<<"enter a wrong number";
   
return 0;
}






