/*
    What are Constant Functions?
    Constant functions are those functions which does not change any property of the current object.
    Constant object can call constant functions of the class.
*/
#include<iostream>
using namespace std;

class Student
{
public:
    
    int age;
    int const rollnumber; 
    
    Student(int age, int r) : rollnumber(r),  age(age) {
        cout << "Parametrized Constructor" << endl;
    }

    /* 
        if we don't declare this function as const then constant object
        of the Student class will not be able to call the display function.
    */
    void display() const {
        cout <<"Roll Number: "<< rollnumber << "  " << "Age: "<< age << endl;
    }
};