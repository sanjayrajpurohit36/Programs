/*
    Create a class Fraction which has member functions to add and multiply 2 fractions & 
    save the result in first Fraction.
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

        void add(Fraction const &f2) { // passing the reference to avoid the extra copying of the values
            // without taking lcm we would just multiply the denominators of both the fractions
            int lcm = denominator * f2.denominator;
            int x = lcm / denominator;
            int y = lcm / f2.denominator;

            numerator = numerator * x + f2.numerator * y;
            denominator = lcm;

            simplify();
            print();
        }
        
        // Function declared as const as it is not making any change to any object's property
        void print() const {
            cout << "(" << numerator << " / " << denominator << ")";
        }
};