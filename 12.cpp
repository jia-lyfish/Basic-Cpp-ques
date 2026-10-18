//12. Write a program to find the area of different 
//    shapes using function overloading.

#include <iostream>
using namespace std;

int area(int side){
    return side * side;
}

int area(double radius){
    return 3.14 * radius * radius;
}

int area(int L, int B){
    return   L * B;
}

int main(){
    cout << "Area of square: " << area(2, 4) << endl;
    cout << "Area of circle: " << area(3.5) << endl;
    cout << "Area of rectangle: " << area(2) << endl;
}