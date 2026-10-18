//17. Write a program to demonstrate a default constructor.

#include <iostream>
using namespace std;

class Student{
  public:
    int marks;

    
    Student(){
        cout << "Constuctor has run."<< endl;
    }
    void getM(){
        cout << "Marks?: ";
        cin >> marks;
    }
    void display(){
        cout << "Marks: " << marks;
    }
};

int main(){

    Student s;
    s.getM();
    s.display();

    return 0;
}
