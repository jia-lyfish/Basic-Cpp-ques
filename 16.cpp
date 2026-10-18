//16. Write a program to demonstrate a friend class.

#include <iostream>
using namespace std;

class Student{
    int marks;

    public:
    void Marks(){
        cout << "Marks: ";
        cin >> marks;
    }

    friend class Teacher;
};

class Teacher{
    public:
    void result(Student s){
        cout << "Result: " << s.marks << endl;
    }
};

int main(){
    Student s1;
    Teacher t1;
    Student s2;
    

    s1.Marks();
    s2.Marks();

    t1.result(s1);
    t1.result(s2);

    return 0;
}