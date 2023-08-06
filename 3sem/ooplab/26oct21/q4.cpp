#include <iostream>
using namespace std;
 
class complex{
    public:
    int real;     
    int imag;      
    complex(){
        imag = 0;
        real = 0;
    }

    complex(int r, int i) {
        real = r;
        imag = i;
    }

    void display() {
        cout << real << " " << imag <<"i" <<endl;
    }

    void friend operator--(complex &x);
    void friend operator++(complex &x);
};

void operator--(complex &x){
    x.real = x.real - 1; 
    x.imag = x.imag - 1;
}

void operator++(complex &x){
    x.real = x.real + 1; 
    x.imag = x.imag + 1;
}



int main() {
    complex c1(11, 10), c2(-5, 11);
    --c1;                     
    c1.display(); 
    ++c1;                     
    c1.display(); 
    
    return 0;
}
