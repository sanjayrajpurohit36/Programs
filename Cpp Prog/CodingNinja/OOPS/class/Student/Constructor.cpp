/*
    Create an object of class to check the functioning of the default constructor.
*/

#include<iostream>
#include "Student.cpp"
using namespace std;

int main()
{
    Student s1;
    cout << endl << s1.getName(); // name will be already set as Max by default constructor
    return 0;
}