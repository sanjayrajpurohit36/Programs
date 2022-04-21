#include<iostream>
#include"Fraction.cpp"
using namespace std;

int main()
{
    Fraction f1(10,2);
    Fraction f2(15,4);
    f1.print();
    cout << " + ";
    f2.print();
    cout << " = ";
    f1.add(f2);
    return 0;
}