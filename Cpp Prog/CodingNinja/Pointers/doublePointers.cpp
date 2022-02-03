#include<iostream>
using namespace std;
/**
    Def:    A double pointer is a pointer which holds the address of a pointer.
**/
int main() {
    int i = 10;
    int *p  = &i; // pointer p is holding the address of variable i
    int **dp = &p; // double pointer is holding the address of pointer p
    cout << *p << " " << **dp; // de-referencing both the pointers
    return 0;
}