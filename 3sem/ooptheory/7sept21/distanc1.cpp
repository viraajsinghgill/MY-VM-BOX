
#include <iostream>

using namespace std;
#define pi (3.141592653589)
#define ll long long

class Distance
{
    int feet, inches;

public:
    void getData();

    void display();

    void Calculate(Distance, Distance);
};
void Distance::getData()
{
    cout << "\nFeet : ";
    cin >> feet;
    cout << "\nInches : ";
    cin >> inches;
}

void Distance::Calculate(Distance d1, Distance d2)
{
    
  if(d1.inches>d2.inches)
  {
  cout<<"larger is "<<d1.feet<<"feet +"<<d1.inches<<"inches";
  
  }
  else
  cout<<"larger is "<<d2.feet<<"feet +"<<d2.inches<<"inches";
  
}

int main()
{
    Distance d1, d2, d3;
    cout << "Enter 1st Distance : \n";
    d1.getData();
    cout << "\nEnter 2nd Distance : \n";
    d2.getData();

    d3.Calculate(d1, d2);

   

    return 0;
}
