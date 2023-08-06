
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
void Distance::display()
{
    cout << "\nFinal Distance : ";
    cout << feet << "feet " << inches << "inches"
         << "\n";
}
void Distance::Calculate(Distance d1, Distance d2)
{
    inches = d1.inches + d2.inches;
    feet = d1.feet + d2.feet + (inches / 12);
    inches = inches % 12;
}

int main()
{
    Distance d1, d2, d3;
    cout << "Enter 1st Distance : \n";
    d1.getData();
    cout << "\nEnter 2nd Distance : \n";
    d2.getData();

    d3.Calculate(d1, d2);

    d3.display();

    return 0;
}
