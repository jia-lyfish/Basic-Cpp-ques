//5. Write a program to generate the multiplicationn table of
//   a number using loops.
#include <iostream>
using namespace std;

int main(){
    int i;
    int x;

    cout << "Enter a number: ";
    cin >> x;
    for(i = 1; i <= 10; i++){
        cout << x << " x " << i << " = " << i*x << endl;
    }

    return 0;
}