//39. Write a program to demonstrate exception 
//    handling using try, throw, and catch.


#include <iostream>
using namespace std;

int main() {
    int age = 15;

    try {
        if (age < 18) {
            throw age;
        }
        cout << "Eligible";
    }
    catch (int x) {
        cout << "Exception caught: Age is less than 18";
    }

    return 0;
}
