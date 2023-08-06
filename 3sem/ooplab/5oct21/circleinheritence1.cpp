#include <iostream>

using namespace std;

class Circle
{
protected:
    double radius{};

public:
    void setRadius(double radius)
    {
        this->radius = radius;
    }

    virtual double getArea()
    {
        return 3.14 * radius * radius;
    }
};

class Rectangle : public Circle
{
public:
    double getArea() override
    {
        return radius * radius;
    }

};

int main()
{

    Rectangle r;
    r.setRadius(20);
    cout <<"Area of Rectangle: "<< r.getArea() <<endl;
    cout <<"Area of Circle: "<< r.Circle::getArea() ;

    return 0;
    }
