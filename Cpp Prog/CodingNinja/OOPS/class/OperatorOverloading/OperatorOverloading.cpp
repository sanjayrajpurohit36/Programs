/*
    Create a class Fraction which has member functions to add and multiply to multiply 2 fractions.
    Use operator overloading to add fractions
*/
#include<iostream>

using namespace std;

class Fraction { 
    private:
        int numerator, denominator;
    public:
        Fraction(int numerator, int denominator) {
            this->numerator = numerator;
            this->denominator = denominator;
        }

        void simplify() {
            // calculate gcd then divide the numerator and denominator of the resultant fraction by gcd
            int gcd = 1;
            int k = numerator < denominator ? numerator : denominator;

            for(int i = 0 ; i < k ; i++) {
                if(numerator % i == 0 && denominator % i == 0) {
                    gcd = i;
                }
            }
            numerator = numerator / gcd;
            denominator /= gcd;
        }
        
        /*
            Fraction const &f2 makes the f2 a constant reference, which means it can only read the value but can't make any change to it.
        */
        void multiply(Fraction const &f2) {
            numerator = numerator * f2.numerator;
            denominator = denominator * f2.denominator;
            print();
        }

        Fraction add(Fraction const &f2) { // passing the reference to avoid the extra copying of the values
            // without taking lcm we would just multiply the denominators of both the fractions
            int lcm = denominator * f2.denominator;
            int x = lcm / denominator;
            int y = lcm / f2.denominator;

            int num = numerator * x + f2.numerator * y;
            Fraction f3(num, lcm);
            f3.simplify();
            return f3;
        }
        /*  
            Operator Overload Syntax: keywprd operator and then the operator without space
            Eg: operator+, operator+ will overload the operator "+" 
        */
        Fraction operator+(Fraction const &f2) { // passing the reference to avoid the extra copying of the values
            // without taking lcm we would just multiply the denominators of both the fractions
            int lcm = denominator * f2.denominator; // for now assume lcm  = multiplication of denominators
            int x = lcm / denominator;
            int y = lcm / f2.denominator;

            int num = numerator * x + f2.numerator * y;

            Fraction f3(num, lcm);
            f3.simplify();
            return f3;
        }

        /*
            Overloading * operator
            Syntax to call Fraction f4 = f1 * f2;
            f1 will be available in this keyword
            and f2 will be available in function argument
        */
        Fraction operator*(Fraction const &f2) {
            int num, deno;
            num = numerator * f2.numerator;
            deno = denominator * f2.denominator;
            
            Fraction f3(num, deno);
            f3.simplify();
            return f3;
        }


        /*
            Overload == operator
        */

        bool operator==(Fraction const &f2) {
            return (numerator == f2.numerator && denominator == f2.denominator);
        }

        // Function declared as const as it is not making any change to any object's property
        void print() const {
            cout << "(" << numerator << " / " << denominator << ")";
        }
};