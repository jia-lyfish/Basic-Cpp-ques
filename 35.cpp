//35. Write a program to copy the contents of one file to another.

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    fstream file1, file2;
    char ch;
    
    ofstream file("First.txt");
    if (file.is_open()) {
        file << "Hello, World!" << endl;
        file.close();
    }
    file1.open("First.txt", ios::in);
    file2.open("Second.txt", ios::out);

    while(file1.get(ch)){
        file2.put(ch);
    }

    file1.close();
    file2.close();

    cout << "Contents copied from First.txt to Second.txt successfully." << endl;

    return 0;
}