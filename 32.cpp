//32. write a program to demonstrate an array of pointers.

#include <iostream>
using namespace std;

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int* ptr_arr[5];

    for(int i = 0; i < 5; i++){
        ptr_arr[i] = &arr[i];
    }

    for(int i = 0; i < 5; i++){
        cout << *ptr_arr[i] << " ";
    }
    cout << endl;

    return 0;
}