//36. Write a program to count the number of characters, words, and lines in a file. 

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    fstream file("Demo.txt", ios::out);
    if (file.is_open()) {
        file << "Hello, World! \n This is Jiya and Sudiksha" << endl;
        file.close();
    }
    int Words = 0;
    int Lines = 0;
    int Characters = 0;
    bool inWord = false;
    char ch;    
    file.open("Demo.txt", ios::in);
    string line;

    while(file.get(ch)){
        Characters++;

        if(ch == '\n'){
            Lines++;
        }
        else if(ch == ' ' || ch == '\t' || ch == '\n'){
           inWord = false;
        }
        else if (inWord == false) {
            Words++;
            inWord = true;
        }
    }
    cout << "Number of Characters: " << Characters << endl;
    cout << "Number of Words: " << Words << endl;
    cout << "Number of Lines: " << Lines << endl;
    return 0;
}

    