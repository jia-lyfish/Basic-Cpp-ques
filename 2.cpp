//2. Write a program to perform arithmetic operations
//   using different operators.
#include <iostream>
using namespace std;

int main(){

    int x;
    int y;
    
    cout << "Enter two numbers: ";
    cin >> x >> y;

    //Addition
    cout << "Add= " << x + y << endl;
    //Subtraction
    cout << "Sub= " << x - y << endl;
    //Multiplication 
    cout << "Multiply= " << x * y << endl;
    //Division 
    cout << "Div= " << x / y << endl;
    //Modulus
    cout << "Modulus= " << x % y << endl;

    return 0;
}