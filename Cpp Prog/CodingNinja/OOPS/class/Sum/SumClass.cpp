#include<stdio.h>
#include<iostream>
#include "Sum.cpp"

using namespace std;

int main() {
    int a,b;
    cout<< "Enter values a & b:";
    cin >> a >> b;
    Sum s1;
    cout <<s1.add(a,b);
    return 0;
}