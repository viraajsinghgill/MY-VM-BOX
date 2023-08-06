#include <iostream>
using namespace std;

class celcius
{
    float cel;

public:
    float Data()
    {
        cout << "In Celsius.\n";
        cin >> cel;
        return cel;
    }
};

class fahrenheit
{
    float cel;
    float fahr;

public:
    void print()
    {
        fahr = (cel * 9 / 5) + 32;
        cout << "In Fahrenheit : " << fahr;
    }
    void operator=(celcius c)
    {
        cel = c.Data();
    }
};
int main()
{
    celcius ob1;
    fahrenheit ob2;
    ob2 = ob1;
    ob2.print();
    return 0;
}
