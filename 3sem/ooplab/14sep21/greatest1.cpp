#include <bits/stdc++.h>
using namespace std;

class BBC;
class KBC
{
    int a, b;

public:
    KBC(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    friend void max(KBC, BBC);
};

class BBC
{
    int c;

public:
    BBC(int n3)
    {
        c = n3;
    }
    friend void max(KBC, BBC);
};

void max(KBC ob1, BBC ob2)
{
    int ans;
    if (ob1.a > ob1.b and ob1.a > ob2.c)
        ans = ob1.a;
    else if (ob1.b > ob1.a and ob1.b > ob2.c)
        ans = ob1.b;
    else
        ans = ob2.c;

    cout << "Greatest number : " << ans;
}

int main()
{
    int n1, n2, n3;
    cout << "1st number : ";
    cin >> n1;
    cout << "2nd number : ";
    cin >> n2;
    cout << "3rd number : ";
    cin >> n3;
    KBC ob1(n1, n2);
    BBC ob2(n3);
    max(ob1, ob2);
    return 0;
}
