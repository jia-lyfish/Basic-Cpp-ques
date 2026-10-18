//15. Write a program to demonstrate a 
//    friend function.

#include <iostream>
using namespace std;

class Student{
    private:
    int marks = 100;

    friend void result(Student s);
};

void result(Student s){
    cout << s.marks;
}

int main(){
    Student s1;
    result(s1);
}