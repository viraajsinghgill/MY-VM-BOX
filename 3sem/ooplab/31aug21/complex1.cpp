
#include <iostream>

using namespace std;
#define pi (3.141592653589)
#define ll long long

class complexSum
{
    int real, imaginary;

public:
    void get();

    void display();

    void ADD(complexSum, complexSum);
    void ADD(int, complexSum);
};
void complexSum::get()
{
    cout << "Real Number : ";
    cin >> real;
    cout << "Imaginary Number : ";
    cin >> imaginary;
}
void complexSum::display()
{

    cout << real << "+" << imaginary << "i"
         << "\n";
}
void complexSum::ADD(complexSum c1, complexSum c2)
{
    real = c1.real + c2.real;
    imaginary = c1.imaginary + c2.imaginary;
}
void complexSum::ADD(int a, complexSum c1)
{
    real = c1.real + a;
    imaginary = c1.imaginary;
}

int main()
{
    complexSum c1, c2, c3;
    int c, a;
    cout << "Enter 1st complex no : \n";
    c1.get();
    cout << "\noperation :\nPress 1 to add a real\nPress 2 to add complex number : \n ";
    cin >> c;
    if (c == 2)
    {
        cout << "\nEnter 2nd complex no : \n";
        c2.get();
        cout << "\n\nThe 1st complex no : ";
        c1.display();
        cout << "The 2nd complex no : ";
        c2.display();
        c3.ADD(c1, c2);
    }
    else
    {
        cout << "\nEnter the real number : \n";
        cin >> a;
        c3.ADD(a, c1);
    }

    cout << "\nOutput : ";
    c3.display();

    return 0;
}
