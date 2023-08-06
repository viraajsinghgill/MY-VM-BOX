#include <iostream>
using namespace std;

class Circle
{
protected:
    double pi = 3.14159;

public:
    double radius = 0;
    void area()
    {
        cout << "Area of Circle : " << pi * radius * radius << endl;
    }
};

class Rectangle
{
protected:
    double breadth;
    double areaRec;
    double length;

public:
    void getData(double r)
    {
        cout << "Breadth of Rectangle:";
        cin >> breadth;
        length = r;
    }

    void area()
    {
        areaRec = length * breadth;
        cout << "Area of Reactangle : " << areaRec << endl;
    }
};

class Box : public Circle, public Rectangle
{

public:
    void area()
    {
        cout << "Volume of Box:" << radius * radius * breadth << endl;
    }
};

int main()
{
    Box ob;
    ob.radius = 2;
    ob.Circle::area();
    ob.Rectangle::getData(ob.radius);
    ob.Rectangle::area();
    ob.area();
    return 0;
}

