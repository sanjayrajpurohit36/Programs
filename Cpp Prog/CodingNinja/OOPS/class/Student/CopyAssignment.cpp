/*
    Use Copy Assignment Operator

    Work: Copy assignment operator copies the values of the member function of one object
    into another even after the object is created & that is the only main difference between copy constructor 
    and Copy Assignment Operator that copy constructor works at the time of object creation but copy assignment operator
    is able to copy the values of one object to another only after the object has been created.

*/
#include<iostream>
#include "Student.cpp"

using namespace std;
int main() {
    Student s1;

    s1.age = 21;
    s1.rollnumber = 23;
    s1.setName("Sanjay");
    cout << "\n" << s1.getName() << " - " << s1.age << " - "  << s1.rollnumber;

    Student s2;
    s2.setName("Max");
    s2.age = 23;
    s2.rollnumber = 50;
    s2 = s1; // copy assignment operator even though we as assigned values to the object s2 still the values of object s2 will become as same as s1 because of copy assignment operator
    cout << "\n" << s2.getName() << " - " << s2.age << " - "  << s2.rollnumber;
    return 0;
}
