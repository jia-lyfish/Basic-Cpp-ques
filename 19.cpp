//19. Write a program to demonstrate a copy constructor.

#include <iostream>
using namespace std;

class Student{
    public:
        int marks;
        Student(int m){
            marks = m;
        }
        Student(Student &s){
            marks = s.marks;
            cout << "Copy constructor has run." << endl;
        }

        void display(){
            cout << "Marks: " << marks << endl;
        }
};
int main(){
    Student s1(90);
    Student s2(33);
    Student s3(s1);

    s1.display();
    s2.display();
    s3.display();
    return 0;

}