//22. Write a program to demonstrate 
//    multilevel inheritance.

#include <iostream>
using namespace std;

class grandparent{
    public:
    string house = "grandparent house";
};

class parent : public grandparent{
    public:
    string car = "parent car";
};
class child : public parent{
    public:
    string bike = "child bike";
};
int main(){
    grandparent g;
    parent p;
    child c;

    cout << c.house << endl;
    cout << c.car << endl;
    cout << c.bike << endl;

    return 0;
}