//24. Write a program to demonstrate
//    hierarchical inheritance.

#include <iostream>
using namespace std;
class mom{
    public:
    string eyes = "blue";
};
class daughter : public mom{

};
class son : public mom{

};
int main(){
    daughter d;
    son s;
    cout << d.eyes << endl;
    cout << s.eyes << endl;
    return 0;
}