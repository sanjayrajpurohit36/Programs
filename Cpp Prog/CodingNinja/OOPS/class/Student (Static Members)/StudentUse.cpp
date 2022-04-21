#include "Student.cpp"

int main() {
    Student s1, s2, s3;
    Student ::getTotalStudents();
    s1.getTotalStudents();// this won't give any error but this is incorrect
    return 0;
}