//13. Write a program to demonstrate
// inline function.

#include <iostream>
using namespace std;

inline int sum(int a, int b){
    return a+b;
}

int main(){
    int x, y;
    cout << "Enter 2 nums: ";
    cin >> x >> y;

    cout << "sum: " << sum(x,y);
}