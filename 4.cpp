//4. Write a program to find the largest of
//   three numbers using if-else.
#include <iostream>
using namespace std;

int main(){

    int x;
    int y;
    int z;

    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    if((x > y) & (x > z)){
        cout << x << " is the largest among the three.";
    }
    else if((y > x) & (y > z)){
        cout << y << " is the largest among the three.";
    }
    else{
        cout << z << " is the largest among the three.";
    }

    return 0;
}