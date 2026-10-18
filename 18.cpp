//18. Write a program to demonstrate a parameterized constructor.

#include <iostream>
using namespace std;

class Student{
    public:
       int marks;

       Student(int m){
        marks = m;
        cout << "Parameterized constructor has run." << endl;
       }
       void getM(){
        cout << "Marks: ";
        cin >> marks;
       }
       void display(){
        cout << "Marks: " << marks;
       }
};

int main(){
    Student s(0);
    s.getM();
    s.display();
    return 0;
}