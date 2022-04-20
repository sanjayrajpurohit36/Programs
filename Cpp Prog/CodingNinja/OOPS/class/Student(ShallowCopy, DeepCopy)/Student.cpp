/*
    Create a class student with two public members rollnumber of type (int) and age of type (int)
    and one private member name of type (string)
*/
#include<iostream>
#include<string.h>
using namespace std;

class Student
{
public:
    char *name;
    int age;
    int rollnumber;
    
    Student()
    { // This is my default constructor
        cout << "\nDefault Constructor called";
    }

    Student(int roll, int age, char *name) 
    {
        rollnumber = roll;
        this->age = age;
        /* 
                        SHALLOW COPY
            Shallow copy because if we make any change in the name parameter the it 
            will be reflected in object's name avoid it.
            It Means we have just copied the address of the first element of the char array

            uncomment the below line to check the working for shallow copy
        */
        // this->name = name; // 

        /* 
            DEEP COPY
            In deep copy we create a whole new array which is the exact copy of the original one passed to the constructor
            by this way any changes made to the original array in from outside will not impact the class member's value
        */

        this-> name = new char[strlen(name) + 1]; // +1 because we need to embed the \0 char as well.
        strcpy(this->name, name);
    }

    void display() {
        cout <<"Roll Number: "<< rollnumber << "  " << "Age: "<< age <<"   " << "Name: " << name << endl;
    }
};