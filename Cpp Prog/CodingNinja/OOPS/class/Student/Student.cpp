/*
    Create a class student with two public members rollnumber of type (int) and age of type (int)
    and one private member name of type (string)

    Q: What is this?

    Ans: -> "this" is an special keyword which holds the address of the current object
            and it is accessible to the whole class.
         -> As "this" holds the address of the current object hence it is an "pointer"
*/
using namespace std;
class Student
{
private:
    string name;

public:
    int age;
    int rollnumber;
    
    Student()
    { // This is my default constructor
        cout << "Default Constructor called";
        name = "Max"
    }

    Student(int roll, int age) 
    {
        cout << "\nParametrized Constructor gets called, & sets the values of class members as passed during the object creation";
        // This is parametrized constructor
        rollnumber = roll;
        this->age = age;
    }

    void setName(string newName) {
        name = newName;
    }

    string getName() {
        return name;
    }
};