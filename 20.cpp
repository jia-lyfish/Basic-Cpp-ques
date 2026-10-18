//20. Write a program to demonstrate constructor and destructor.

#include <iostream>
using namespace std;

class Student{
    public:
        int marks;
        Student(int m){
            marks = m;
            cout << "Constructor has run." << endl;
        }
        void display(){
            cout <<"Marks: " << marks << endl;
        }
        ~Student(){
            cout << "Destructor has run." << endl;
        }
};
int main(){
    Student s(99);
    s.display();
    return 0;
}
