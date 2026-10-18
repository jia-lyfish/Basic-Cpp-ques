//33. Write a program to allocate memory dynamically using new and delete.
#include <iostream>
using namespace std;

int main() {
    int *p = new int;

    *p = 10;
    cout << *p;

    delete p;
    return 0;
}