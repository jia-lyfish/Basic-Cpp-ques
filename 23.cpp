//23. Write a program to demonstrate
//    multiple inheritance.

#include <iostream>
using namespace std;
class mom{
    public:
    string food = "mom cooked food"; 
};
class dad{
    public:
    string money = "Dad's money";
};
class child : public mom, public dad{
    public:
    string toy = "child's toy";
};
int main(){
    child c;
    cout << c.food << endl; 
    cout << c.money << endl;
    cout << c.toy << endl;
    return 0;
}