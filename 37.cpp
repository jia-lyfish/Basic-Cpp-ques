//37. Write a program using a function template to find the maximum of two values. 
#include <iostream>
using namespace std;

template <class T>
T maximum(T a, T b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    cout << "Maximum: " << maximum(10, 20) << endl;
    cout << "Maximum: " << maximum(5.5, 2.3) << endl;

    return 0;
}