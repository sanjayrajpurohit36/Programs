/*
    Create a setter member function in the class to set the 
    value of private member of the class and then create a 
    getter function to get the value of the private member


    By using the setter functions user is allowed to set the values of the private member of the class,
    but the advantage we get by using a function is that we can add constraints to that function 
    whatever we want to add.


    By using getter function we can access the values of the private members of the class
*/
#include<iostream>
#include "Student.cpp"

using namespace std;
int main() {
    Student s1;

    s1.age = 21;
    s1.rollnumber = 23;
    s1.setName("Sanjay");
    cout << s1.getName() << " - " << s1.age << " - "  << s1.rollnumber;
    return 0;
}
