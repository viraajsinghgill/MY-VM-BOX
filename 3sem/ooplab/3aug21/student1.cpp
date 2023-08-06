#include<iostream>
using namespace std;

struct student
{
    int roll;
    char name[100];
    double fee;
    char gender;
    float a,b,c,d,e,f,g;
    
    void input()
    {
     cout<<"enter your roll number "<<endl;
     cin>>roll;
     cout<<"enter your name "<<endl;
     cin>>name;
     cout<<"enter your fee "<<endl;
     cin>>fee;
     cout<<"what is your gender m/f/others "<<endl;
     cin>>gender;
     cout<<"enter marks of oop "<<endl;
     cin>>a;
     cout<<"enter marks of oop lab "<<endl;
     cin>>b;
     cout<<"enter marks of dsa "<<endl;
    cin>>c;
    cout<<"enter marks of dsa lab "<<endl;
    cin>>d;
    cout<<"enter marks of dms "<<endl;
    cin>>e;
    cout<<"enter marks of eco "<<endl;
    cin>>f;
    cout<<"enter marks of pdc "<<endl;
    cin>>g;
    
    
    
    }
    void display()
    {
       cout<<" your roll number \t"<<roll<<endl;
        cout<<" your name \t"<<name<<endl;
        cout<<"your gender is \t "<<gender<<endl;
        float p=(a+b+c+d+e+f+g)/7;
        float s=(p+7.5)/10;
        cout<<"your sgpa \t"<<s<<endl;
        
        
    }
    
  
};
int main()
{
  struct student s1;
  s1.input();
  s1.display();
  
  return 0;
  

}
