//7. Write a program to calculate the factorial
//   of a number.
#include <iostream>
using namespace std;

int main(){
    int n;
    int i;
    int fac = 1;

    cout << "Enter a number: ";
    cin >> n;

    for(i = 1; i <= n; i++){
        fac = fac * i;

    }
    cout << "Factorial = " << fac;

    return 0;
}