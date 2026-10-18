//21. Write a program to demonstrate 
//    single inheritance.

#include <iostream>
using namespace std;

class mom{
    public:
    string eyes = "blue";
};

class child : public mom{

};
int main(){
    mom m;
    child c;
    cout << c.eyes;

    return 0;
}