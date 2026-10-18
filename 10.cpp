//10. Write a program to perform string operations
//    (length, copy, concatenate, compare).
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    string str1, str2, copied, concatenated;

    cout << "Enter first string: ";
    getline(cin, str1);

    cout << "Enter second string: ";
    getline(cin, str2);

    // Length
    cout << "Length of first string = " << str1.length() << endl;
    cout << "Length of second string = " << str2.length() << endl;

    // Copy
    copied = str1;
    cout << "Copied string = " << copied << endl;

    // Concatenate
    concatenated = str1 + " " + str2;
    cout << "Concatenated string = " << concatenated << endl;

    // Compare
    if (str1 == str2) {
        cout << "Both strings are equal." << endl;
    } else if (str1 < str2) {
        cout << "First string is smaller than second string." << endl;
    } else {
        cout << "First string is greater than second string." << endl;
    }

    return 0;
}