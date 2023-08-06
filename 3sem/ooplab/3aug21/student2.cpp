#include<iostream>
using namespace std;

struct student
{
    int roll;
    char name[100];
    double fee;
    char gender;
    float a;
    int n;
    char br;
    //char branch[10];
    //struct student b[10];
    };
    int main()
    { int n;
    char branch;
     cout<<"enter what no. students details you want to enter "<<endl;
     cin>>n;
     struct student b[n];
    
     for(int i=1;i<=n;i++)
     { cout<<"student"<<i<<endl;
     cout<<"enter student roll number "<<endl;
     cin>>b[i].roll;
     cout<<"enter your name "<<endl;
     cin>>b[i].name;
     cout<<"enter your fee "<<endl;
     cin>>b[i].fee;
     cout<<"what is your gender m/f/others "<<endl;
     cin>>b[i].gender;
     cout<<"your branch IT/CSE/EE/ME"<<endl;
     cin>>b[i].br;
          cout<<"enter marks  "<<endl;
     cin>>b[i].a;
     
    }
  
     cout<<"which branch students details you want"<<endl;
     cin>>branch;

    
    
    
       for(int i=1;i<=n;i++)
       {
         if(branch==b[i].br)
      {
       cout<<" your roll number \t"<<b[i].roll<<endl;
        cout<<" your name \t"<<b[i].name<<endl;
        cout<<"your gender is \t "<<b[i].gender<<endl;
        
        cout<<"your marks \t"<<b[i].a<<endl;
        }
        else
        cout<<"not exist";
        }
        
    return 0;
        
    }
    
  

