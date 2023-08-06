#include<iostream>
#include<cstring>
using namespace std;

class addition {
private:
    char x[20], y[20];
public:

    void input() {
        cout << "Enter two strings:";
        cin >> x>>y;
    }

    friend void add(addition &obj);

    void display() {
        cout << "concated string is:" << x;
    }
};

void add(addition &obj) {
    strcat(obj.x,obj.y);

}

int main() {

    addition obj;
    obj.input();

    add(obj);
    obj.display();

    return 0;
}
