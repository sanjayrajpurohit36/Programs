#include<iostream>
#include<stdio.h>

using namespace std;

int operator1() { 
    double a = 6/4; // 1 because bboth the operands are int
    int b = 6/4; // 1
    int c = a + b; // 1+1 = 2
    cout << c;
}

int operator2() { 
    double a = 6.0/4;  // 1.5 as one of the operand is float
    int b = 6/4; // 1 as both the operands are int
    double c = a + b; // 1.5 + 1 = 2.5
    cout << endl<< c; // 2.5
}

int main() { 
    operator1();
    operator2();
    return 0;
}

