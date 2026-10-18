//34. Write a program to create, write and read a text file.

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream file("example.txt");
    if (file.is_open()) {
        file << "Hello, World!" << endl;
        file.close();
    }

    ifstream readFile("example.txt");
    if (readFile.is_open()) {
        string line;
        while (getline(readFile, line)) {
            cout << line << endl;
        }
        readFile.close();
    }

    return 0;
}