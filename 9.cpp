//9. Write a program to find the largest and
//   and the smallest element in an array.

#include <iostream>
using namespace std;

int main(){

    int i, sml, lrg;
    int arr[] = {1, 7, 5, 9, 3, 9, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    sml = arr[0];
    lrg = arr[0];

    for(i = 1; i < size; i++){
        if(arr[i] < sml){
            sml = arr[i];
        }
        if(arr[i] > lrg){
            lrg = arr[i];
        }
    }

    cout << "Smallest: " << sml << endl;
    cout << "Largest: " << lrg << endl;
    
    return 0;
}