/*
    Create an object of class to check the functioning of the default constructor.
*/

#include<iostream>
#include "Student.cpp"
using namespace std;

int main()
{
    Student s1;
    cout << endl <<"Name : "<< s1.getName(); // name will be already set as Max by default constructor

    Student s2(10, 20); // For this object parameterized constructor will be called
    cout << endl << "Age : " << s1.age << " Rollnumber : " << s1.rollnumber;
    return 0;
}