//30. Write a program to overload the binary '+'
//    operator for complex numbers.
#include <iostream>
using namespace std;

class Complex {
    int real, img;
public:
    Complex(int r, int i){
        real = r;
        img = i;

    }
    Complex operator+(Complex c){
        Complex temp(0, 0);
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
    void display(){
        cout << real << " + " << img << "i" << endl;
    }
};


int main(){
    Complex c1(3, 4);
    Complex c2(5, 6);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}