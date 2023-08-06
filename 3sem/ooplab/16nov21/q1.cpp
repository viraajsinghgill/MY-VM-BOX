#include<iostream>
using namespace std;

class student
{
  public:
  int roll,age;
  char name[20];

};
class ugstudent : public student
{
  public:
   void enter1()
   {
     cout<<"enter the name :"<<endl;
     cin>>name;
     cout<<"enter the roll number"<<endl;
     cin>>roll;
     cout<<"enter the age"<<endl;
     cin>>age;
     
   }
};
class pgstudent : public student
{
  public:
    void enter2()
    {
    cout<<"enter the name :"<<endl;
     cin>>name;
     cout<<"enter the roll number"<<endl;
     cin>>roll;
     cout<<"enter the age"<<endl;
     cin>>age;
      
    }
};

int main()
{
  ugstudent obj1[5];
  pgstudent obj2[5];
  cout<<"enter data for ug students :"<<endl;
   for(int i=0;i<5;i++)
   {
     obj1[i].enter1();
   }
   cout<<"enter data for pg students :"<<endl;
   for(int i=0;i<5;i++)
   {
     obj2[i].enter2();
   }
   int avg1=0,avg2=0;
   for(int i=0;i<5;i++)
   {
     avg1=avg1+ obj1[i].age;
     avg2=avg2+ obj2[i].age;
   }
   cout<<"average age of UG students : \n"<<avg1/5<<endl;
   cout<<"average age of PG students : \n"<<avg2/5<<endl;
 return 0;  

}
