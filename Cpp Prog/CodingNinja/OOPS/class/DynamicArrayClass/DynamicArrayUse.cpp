#include <iostream>
#include "DynamicArray.cpp"

using namespace std;

int main()
{
    DynamicArray d1;
    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(50);
    d1.add(60);
    d1.add(70);
    /*
        DynamicArray d2(d1); // Copy Constructor also makes a shallow copy of the object
        d2 = d1; // Copy Assignment operator, also makes a shallow copy of the object

        d1.replaceElement(0, 100);

        d1.print();
        d2.print();

        so to avoid shallow copy we should create our own copy constructor and copy assignment operator
    */
    DynamicArray d2(d1);
    d1.replaceElement(0, 100);
    cout << "d1 : ";
    d1.print();
    cout << endl;
    cout << "d2 : ";
    d2.print(); // now the 0th element of the d2 object won't become 100;

    DynamicArray d3;
    d1.replaceElement(0, 100);
    cout << "d1 : ";
    d1.print();
    cout << endl;
    cout << "d2 : ";
    d2.print();
    return 0;
}