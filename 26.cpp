//26. Write a program to resolve ambiguity in multiple 
//    inheritance using scope resolution operator.

#include <iostream>
using namespace std;
class grandparent{
    public:
    string house = "grandparent house";
};
class dad : public grandparent{
    public:
    string car = "dad car";
};
class mom : public grandparent{
    public:
    string food = "mom food";
};
class child : public dad, public mom{
    public:
    string toy = "child toy";
};
int main(){
    child c;
    //cout << c.house << endl; // this line would give us ambiguity error, 
                               // so to resolve it we will use "::"
    cout << c.mom::house << endl;
    cout << c.car << endl;
    cout << c.food << endl;
    cout << c.toy << endl;
    return 0;
}