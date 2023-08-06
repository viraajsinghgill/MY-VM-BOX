#include <iostream>
using namespace std;
 
class complex{
   private:
    int real;     
    int imag;      
    public:
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

    complex operator + (complex c2) {
        complex r;
        r.real = real + c2.real;
        r.imag = imag + c2.imag;
        return complex(r.real, r.imag);
    }

    complex operator * (complex c2) {
        complex r;
        r.real = real * c2.real;
        r.imag = imag * c2.imag;
        return complex(r.real, r.imag);
    }
};

int main() {
    complex c1(11, 10), c2(5, 6), c3;
    c3 = c1+c2;                     
    c3.display(); 
    c3 = c1*c2;
    c3.display();
    
    return 0;
}
