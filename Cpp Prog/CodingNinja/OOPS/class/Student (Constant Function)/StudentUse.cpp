#include"Student.cpp"

int main() {
    Student const s1(15, 21);
    s1.display();

    Student s2(12, 21);
    s2.display();
    return 0;
}