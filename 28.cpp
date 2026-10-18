//28. Write a program to demonstrate pure virtual function and abstract class.

#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() = 0; // Pure virtual function
};

class Derived : public Base {
public:
    void display() {
        cout << "Displaying from Derived class" << endl;
    }
};

int main(){
    Derived d;
    d.display();

    return 0;
}