/*
    What are Static Members of class?
    Ans:
    Static Members of a class are those members which are the part of the class.
    Static Members of a class is shared among all the objects of the class
    The accessing syntax and initialization syntax of a static member is different from the normal members

    Initializing syntax:
    The static member of a class has to get initialized outside the class
    Eg: int Student :: totalStudents = 0;
    => ::  Scope resolution operator


    Static member functions:
    Static member functions can only access the static members of the class.
    Static member functions dont have their own this as they can't access the property non static properties.
*/
#include<iostream>
using namespace std;

class Student
{
public:
    
    int age;
    int rollnumber;
    static int totalStudents;

    Student() {
        // default constructor
        Student ::totalStudents++; // incrementing the totalStudents value every time when a new student object is created.
    }
    void display() {
        cout <<"Roll Number: "<< rollnumber << "  " << "Age: "<< age << endl;
    }

    static void getTotalStudents () {
        cout << "Total Students: "<< Student :: totalStudents << endl;
    }
};


// initialization of the static member of the class
int Student :: totalStudents = 0;