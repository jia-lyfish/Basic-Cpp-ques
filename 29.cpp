//29. Write a program to overload the unary operator.
#include <iostream>
using namespace std;

class num{
    int value;
public:
    void setValue(int v){
        value = v;
    }
    void operator++(){
        value++;
    }
    void show(){
        cout << "Value: " << value;
    }
};

int main(){
    num n;
    n.setValue(5);
    ++n;
    n.show();
    return 0;
}