#include<iostream>
using namespace std;


class account
{
 char name[30];
 char type[10];
 long int an;
 int balam;
 
 public:
      void input()
      {
      cout<<"name of depositor";
    cin>>a[i].name;
    cout<<"enter account number :";
    cin>>a[i].an;
    cout<<"type of account current/saving :";
    cin>>a[i].type;
    cout<<"enter account number :";
    cin>>a[i].an;
    cout<<"enter balance :";
    cin>>a[i].balam;
      }
      void deposit()
  {  
    int m;
    long int s;
    cout<<"enter account number in which you want to deposit money :";
    cin>>s;
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
  
  void withdraw()
  {   
    int m;
    long int s;
    cout<<"enter account number in which you want to deposit money :";
    cin>>s;
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
    void display()
    {
      long int s;
    cout<<"enter account number in which you want to deposit money :";
    cin>>s;
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
};
int main()
{ int n,i;
   cout<<"enter number of person detail you want to ente :";
    cin>>n;
    account a[n];
    account a1;
  for(i=0;i<n;i++)
    {
      a1.input();
      a1.deposit();
      a1.withdraw();
      a1.display();
    }
    return 0;
}



