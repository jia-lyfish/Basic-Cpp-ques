//11. Write a program to demonstrate function overloading
//    for addition of floating-point numbers.

#include <iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

float add(float a, float b){
    return a + b;
}

int main(){
    string a, b;

    cout << "Enter 2 nums: ";
    cin >> a>> b;

    if(a.find('.') != string::npos){
        float x = stof(a);
        float y = stoi(b);
        cout << "sum: " << x + y;
    }
    else{
        int x = stoi(a);
        int y = stoi(b);
        cout << "sum: " << x + y;
    }
    return 0;
}