#include<iostream>
#include"OperatorOverloading.cpp"
using namespace std;

int main()
{
    Fraction f1(10,2);
    Fraction f2(15,4);
    cout << "Using normal addition function \n";
    f1.print();
    cout << " + ";
    f2.print();
    cout << " = ";
    // Normal addition
    Fraction f3 = f1.add(f2);
    f3.print();

    // Operator overloading(+)
    cout << endl;
    cout << "Addition Using Operator Overloading \n";
    f1.print();
    cout << " + ";
    f2.print();
    cout << " = ";
    Fraction f4 = f1 + f2;
    f4.print();

    // Operator overloading (*)
    cout << endl;
    cout << "Muliplication Using Operator Overloading \n";
    f1.print();
    cout << " * ";
    f2.print();
    cout << " = ";
    Fraction f5 = f1 * f2;
    f5.print();


    // Operator overloading (==)
    cout << endl;
    cout << "Comparing fractions Using Operator Overloading \n";
    Fraction f6(10 , 2);
    Fraction f7(10 , 23);
    if(f6 == f7) {
        cout << "equal";
    } else {
        cout << "not equal";
    }
    // cout << ans;

    return 0;
}