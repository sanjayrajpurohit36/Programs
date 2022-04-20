/*
    Explain the use of Initialization List
    What if we want to declare a class member as a constant member whose value gets fixed.

    int const rollnumber;

    Note:- We know that while declaring a const variable we need to define its value at the time of initialization only.Eg
    int const rollnumber = 101;
    , by this way the value of the rollnumber will never change but we cannot do it here as if we do so then for 
    every object the value of roll number will be 101 only

    So, to do this we need initialization list which is used to give the initial value 
*/
#include<iostream>
using namespace std;

class Student
{
public:
    
    int age;
    /*
        Even if we have mentioned const here
        at the time of object creation default constructor will get called here and const rollnumber will
        point to some const grabage value which we won't be able to change later.
        also
        const int rollnumber = 101; is not a good thing beause then for every object the rollnumber will be 101

        Since we are making rollnumber as constant then we need to initialize the rollnumber at the time of declaration, for this we can't 
        even use a constructor as by the time the compiler reaches to the constructor memory is already created with a garbage value.

        So what do we do now ?
        We need to initialization list to initialize the const members of the class
        Syntax 
        
        // Parametrized constructor
        Student(int r ) : rollnumber(r) ... {

        }

        NOTE: So, whenever we have const data members we must have parametrized constructor, and by using initialization list
        we can also initialize non constant variables.

        Even if we have the data member name and parameter name as same we do not need to use this->age(age) as it is totally
        differentiable that the name outside the brackets () is data members of the class and the inside ones are function parameters.

    */
    int const rollnumber; 
    
    Student(int age, int r) : rollnumber(r),  age(age) {
    }

    void display() {
        cout <<"Roll Number: "<< rollnumber << "  " << "Age: "<< age << endl;
    }
};