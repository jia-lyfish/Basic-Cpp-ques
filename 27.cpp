//27. Write a program to demonstrate runtime polymorphism using virtual function.

#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Displaying from Base class" << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Displaying from Derived class" << endl;
    }
};

int main() {
    Base* ptr;
    Derived d;
    ptr = &d;
    ptr->display();
    return 0;
}