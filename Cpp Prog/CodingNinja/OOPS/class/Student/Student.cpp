/*
    Create a class student with two public members rollnumber of type (int) and age of type (int)
    and one private member name of type (string)
*/
using namespace std;
class Student
{
private:
    string name;

public:
    int age;
    int rollnumber;

    void setName(string newName) {
        name = newName;
    }

    string getName() {
        return name;
    }
};