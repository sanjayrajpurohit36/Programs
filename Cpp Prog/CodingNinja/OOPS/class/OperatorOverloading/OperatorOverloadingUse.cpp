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


    // Prefix operator overloading ++x
    cout << endl << "Post increment operator overload: " << endl;
    Fraction f8(6, 1);
    f8.print();
    cout << endl;
    Fraction f9 = ++(++f8); 
    /*
        Expected Behaviour: Ideally the value of f8 should become 8/1 but it is coming as 7/1 but value of f9 is coming fine which is 8/1.
        To make this nesting work we have to return the fraction value by reference
        from the class so that the memory which the system uses for storing the temporary result does not get created
        it should use the same memory of f8.
        
        then it will be interpreted like f8 = ++f8;
        
        so in the classes member function we need to use "&" after the return type to return the value by reference
        to make it work that's all.
    */
    f8.print();
    f9.print();
    cout << endl;

    // Postfix operator overloading x++

    /*
        Note: there is no chaining in post increment operator so, we do not need to handle that
    */

    Fraction f10(6,1);
    Fraction f11 = f10++;
    cout << endl;
    f10.print();
    f11.print();


    /*
        += Operator overload
    */
    
    cout << endl;
    Fraction f12(6, 1);
    Fraction f13(5, 1);
    f12 += f13 += f13;
    cout << endl;
    f12.print();
    return 0;
}