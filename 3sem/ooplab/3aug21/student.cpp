#include<iostream>
using namespace std;

struct student
{
    int roll,marks,a;
    char name[100];
    double fee;
    char gender,branch,br;
    float b,n;
    
    void input()
    {   
   // struct student a[n];
    int n;
    cout<<"enter student number :";
    cin>>n;
     struct student a[n];
    for(int i=0;i<n;i++)
    {
     cout<<"enter your roll number "<<endl;
     cin>>a[i].roll;
     cout<<"enter your name "<<endl;
     cin>>a[i].name;
     cout<<"enter your fee "<<endl;
     cin>>a[i].fee;
     cout<<"what is your gender m/f/others "<<endl;
     cin>>a[i].gender;
    cout<<"enter branch";
    cin>>a[i].br;
     cout<<"enter marks of oop "<<endl;
     cin>>a[i].marks;
     }
    
    
    }
    void display()
    {
      cout<<"enter specific branch";
      cin>>branch;
  for(int i=0;i<n;i++)
     {
       cout<<" your roll number \t"<<a[i].roll<<endl;
        cout<<" your name \t"<<a[i].name<<endl;
        cout<<"your gender is \t "<<a[i].gender<<endl;
        
        cout<<"your marks \t"<<a[i].marks<<endl;
        
        }
    }
    
  
};
int main()
{
  struct student s1;
  s1.input();
  s1.display();
  
  return 0;
  

}
