//14. Write a program using default 
//    arguments in functions.

#include <iostream> 
using namespace std;

int add(int a = 3, int b = 10){
    return a + b;
}

int main(){
    cout << "Sum: " << add();
    
    return 0;
}