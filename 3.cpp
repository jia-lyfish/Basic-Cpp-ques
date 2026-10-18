//3. Write a program to demonstrate the use of 
//   different data types and type casting.
#include <iostream>
using namespace std;

int main(){

    string name = "Jiya";
    int a = 10;
    float b = 9.5;
    double c = 3.14159;
    char d = 'A';
    bool e = true;

    cout << "String: " << name << endl;
    cout << "Integer: " << a << endl;
    cout << "Float: " << b << endl;
    cout << "Double: " << c << endl;
    cout << "Character: " << d << endl;
    cout << "Boolean: " << e << endl;

    //Type Casting
    double x = 10.99;
    int y = (int)x;

    cout << "before type casting: " << x << endl;
    cout << "after type casting: " << y << endl;


    return 0;
}