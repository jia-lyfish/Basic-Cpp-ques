//8. Write a program to perform matrix addition
//   using arrays.
#include <iostream>
using namespace std;

int main(){

    int a[3][3], b[3][3], c[3][3], i, j;
    
    cout << "Enter nums for the first 3x3 matrix: ";

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            cin >> a[i][j];
        }
    }

    cout << "Enter nums for the second 3x3 matrix: ";

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            cin >> b[i][j];
        }
    }
    
    // Adding the 2 matrices

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
   
    for(i = 0; i < 3; i++){
        cout << "[";
        for(j = 0; j < 3; j++){
            cout << c[i][j] << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}