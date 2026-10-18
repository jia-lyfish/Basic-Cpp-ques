//40. Write a program to handle divide-by-zero exception using exception handling. 

#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 0;

    try {
        if (b == 0)
            throw b;

        cout << "Result: " << a / b << endl;
    }
    catch (int x) {
        cout << "Error: Division by zero is not allowed!";
    }

    return 0;
}
