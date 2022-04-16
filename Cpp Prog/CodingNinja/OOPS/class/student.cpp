/*
    Create a class student and create its object.
    1. Statically
    2. Dynamically
*/
#include<iostream>
using namespace std;

class Student {
public:
    int rollnumber;
    int age;
};

int main() {
    // static object
    Student s1;
    s1.rollnumber = 27;
    s1.age = 21;
    cout << s1.age << "-" << s1.rollnumber << endl;

    // dynamic object using asterisk (*) 
    Student *s2 = new Student;
    (*s2).rollnumber = 29;
    (*s2).age = 32;
    cout << (*s2).age << "-" << (*s2).rollnumber << endl;


    // dynamic object using arrow ->
    Student *s3 = new Student;
    s3->rollnumber = 30;
    s3->age = 30;
    cout << s3->age << "-" << s3->rollnumber;
    return 0;
}