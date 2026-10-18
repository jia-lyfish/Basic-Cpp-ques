//31. Write a program to swap two numbers using pointers

#include <iostream>
using namespace std;

int main(){
    int a = 10, b = 20;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    int* ptr1 = &a;
    int* ptr2 = &b;
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}