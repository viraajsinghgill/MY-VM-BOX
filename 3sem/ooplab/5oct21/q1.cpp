#include <iostream>
using namespace std;

class Circle
{
protected:
    double pi = 3.14159;
    double radius;

public:
    void setRadius(double r)
    {
        radius = r;
    }

    void areaCircle()
    {
        cout << "Area of Circle : " <<pi * radius * radius << endl;
    }
};

class Rectangle : public Circle
{
    double breadth;

public:
    void getData()
    {
        cout << "Breadth of Rectangle:";
        cin >> breadth;
    }

    void areaReactangle()
    {
        cout << "Area of Reactangle : " << radius * breadth << endl;
    }
};

int main()
{
    Rectangle rec;
    double r;
    cout << "Radius of Circle: ";
    cin >> r;
    rec.setRadius(r);
    rec.areaCircle();
    rec.getData();
    rec.areaReactangle();
    return 0;
}
