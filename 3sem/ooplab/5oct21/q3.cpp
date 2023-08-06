#include <iostream>

using namespace std;
#define pi 3.14159
class Circle
{

public:
    double radius = 0;
    void area()
    {
        cout << "Area of Circle : " << pi * radius * radius << endl;
    }
};

class Rectangle : public Circle
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

class Cylinder : public Circle
{
protected:
    double height;

public:
    void getHeight()
    {
        cout << "Height of Cylinder : ";
        cin >> height;
    }
    void volume()
    {
        cout << "The volume of the cylinder is: "
             << (pi * radius * radius * height) << endl;
    }
};

int main()
{
    Cylinder c;
    Rectangle r;
    r.radius = 2;
    r.Circle::area();
    r.getData(r.radius);
    r.area();
    c.radius = r.radius;
    c.getHeight();
    c.volume();
    return 0;
}
