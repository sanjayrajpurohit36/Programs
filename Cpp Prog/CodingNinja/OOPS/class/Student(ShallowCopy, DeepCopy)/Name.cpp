#include"Student.cpp"

int main () {
    char name[] = "abcd";

    Student s1(21, 15, name);
    name[3] = 'e';
    s1.display();

    Student s2(20, 15, name);
    s2.display();
    return 0;
}

/*
Output:
        Roll Number: 21  Age: 15   Name: abce
        Roll Number: 20  Age: 15   Name: abce

        because both the objects of the class Student are pointing to the same address of the name
        so, this is known as shallow copy.

Solution: To avoid this to happen we should use deep copy in the class
        which means instead if this->name = name; we should create a whole new array and then assign it to the class member;


Ouptut after using Deep Copy: 
        Roll Number: 21  Age: 15   Name: abcd
        Roll Number: 20  Age: 15   Name: abce
*/