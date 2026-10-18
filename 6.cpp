//6. Write a program to check weather a
//   number is prime.
#include <iostream>
using namespace std;

int main(){
    
    int i;
    int x;
    bool prime = true;

    cout << "Enter a number: ";
    cin >> x;

    for(i = 2; i < x; i++){
       if(x % i == 0){
        prime = false;
        break;
       }
       else{
        prime = true;
        break;
       }
    }
    if(prime){
        cout << x << " is a prime number.";
    }
    else{
        cout << x << " is not a prime number.";    
    }
    return 0;
}