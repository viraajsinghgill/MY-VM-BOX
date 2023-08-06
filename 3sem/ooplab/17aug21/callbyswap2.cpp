#include <bits/stdc++.h>

using namespace std;

class swapNumbers
{
public:
    void swapbyValue(int a, int b)
    {
        int t = b;
        b = a;
        a = t;
        cout << "Call by Value : " << a << " " << b << "\n";
    }

    void swapbyAddress(int &a, int &b)
    {
        int t = b;
        b = a;
        a = t;
    }

    void swapbyReference(int *a, int *b)
    {
        int t = *b;
        *b = *a;
        *a = t;
    }
};

int main()
{
    swapNumbers ob;
    int a, b;
    cout << "Enter value a and b : ";
    cin >> a >> b;
    ob.swapbyValue(a, b);
    ob.swapbyAddress(a, b);
    cout << "Call by Address : " << a << " " << b << endl;
    ob.swapbyReference(&a, &b);
    cout << "Call by Reference : " << a << " " << b << endl;

    return 0;
}
