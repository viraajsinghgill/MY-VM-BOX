#include <iostream>
#include <string>
using namespace std;
class Exam()
int a;
Exam(int a) { this->a = a;}
public:
void input(int a) { this->a = a;}
void display() { cout<<this->a;}
};
int main(){
Exam oop(30);
oop.input(40);
oop.display();
return 0;
}
