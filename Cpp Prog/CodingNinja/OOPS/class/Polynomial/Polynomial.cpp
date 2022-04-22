/*
    Implement Polynomial Class

    Implement a polynomial class, with the following properties and functions.
    Properties :
    1. An integer array (lets say A) which holds the coefficient and degrees. Use array indices as degree and A[i] as coefficient of ith degree.
    2. An integer holding total size of array A.
    Functions :
    1. Default constructor
    2. Copy constructor
    3. setCoefficient -
    This function sets coefficient for a particular degree value. If the given degree is greater than the current capacity of polynomial, increase the capacity accordingly and add then set the required coefficient. If the degree is within limits, then previous coefficient value is replaced by given coefficient value
    4. Overload "+" operator (P3 = P1 + P2) :
    Adds two polynomials and returns a new polynomial which has result.
    5. Overload "-" operator (P3 = p1 - p2) :
    Subtracts two polynomials and returns a new polynomial which has result
    6. Overload * operator (P3 = P1 * P2) :
    Multiplies two polynomials and returns a new polynomial which has result
    7. Overload "=" operator (Copy assignment operator) -
    Assigns all values of one polynomial to other.
    8. print() -
    Prints all the terms (only terms with non zero coefficients are to be printed) in increasing order of degree.
    Print pattern for a single term : <coefficient>"x"<degree>
    And multiple terms should be printed separated by space. And after printing one polynomial, print new line. For more clarity, refer sample test cases
*/

#include<iostream>
using namespace std;

class Polynomial
{
public:
    int *degCoeff; // Name of your array (Don't change this)
    int capacity;

    // Default Constructor
    Polynomial()
    {
        capacity = 5;
        degCoeff = new int[capacity];
        for (int i = 0; i < capacity; i++)
        { // setting every coeff as 0 in default constructor
            degCoeff[i] = 0;
        }
    }

    Polynomial(Polynomial const &P)
    { // copy constructor
        capacity = P.capacity;
        degCoeff = new int[capacity];

        for (int i = 0; i < P.capacity; i++)
            degCoeff[i] = 0;

        for (int i = 0; i < P.capacity; i++)
            degCoeff[i] = P.degCoeff[i];
    }

    // Copy Assignment Operator
    void operator=(Polynomial const &P)
    {
        delete[] degCoeff;
        capacity = P.capacity;
        degCoeff = new int[capacity];

        for (int i = 0; i < P.capacity; i++)
            degCoeff[i] = 0;

        for (int i = 0; i < P.capacity; i++)
            degCoeff[i] = P.degCoeff[i];
    }

    // setCoefficient
    void setCoefficient(int degree, int coeff)
    {
        if (degree >= capacity)
        {
            int size = capacity * 2;
            while (size <= degree)
            {
                size *= 2;
            }
            int *newArr = new int[size];

            for (int i = 0; i < size; i++)
                newArr[i] = 0;
            for (int i = 0; i < capacity; i++)
                newArr[i] = degCoeff[i];

            delete[] degCoeff;
            degCoeff = newArr;
            capacity = size;
        }
        degCoeff[degree] = coeff;
    }

    // + operator overload
    Polynomial operator+(Polynomial const &P)
    {
        Polynomial Pnew;
        int i = 0, j = 0;
        for (i, j; i < capacity && j < P.capacity; i++, j++)
        {
            Pnew.setCoefficient(i, degCoeff[i] + P.degCoeff[j]);
        }

        while (i < capacity)
        {
            Pnew.setCoefficient(i, degCoeff[i]);
            i++;
        }
        while (j < P.capacity)
        {
            Pnew.setCoefficient(j, P.degCoeff[j]);
            j++;
        }
        return Pnew;
    }

    // - operator overload
    Polynomial operator-(Polynomial const &P)
    {
        Polynomial Pnew;

        int i = 0, j = 0;
        for (i, j; i < capacity && j < P.capacity; i++, j++)
        {
            Pnew.setCoefficient(i, degCoeff[i] - P.degCoeff[j]);
        }

        while (i < capacity)
        {
            if (degCoeff[i] != 0)
            {
                Pnew.setCoefficient(i, degCoeff[i]);
            }
            else
                Pnew.setCoefficient(i, 0);

            i++;
        }
        while (j < P.capacity)
        {
            if (P.degCoeff[j] != 0)
            {
                Pnew.setCoefficient(j, (-1 * P.degCoeff[j]));
            }
            else
                Pnew.setCoefficient(j, 0);
            j++;
        }
        return Pnew;
    }

    int getCoeff(int pos)
    {
        if (pos >= capacity)
        {
            return 0;
        }
        else
            return degCoeff[pos];
    }

    // * Operator overload
    Polynomial operator*(Polynomial const &P)
    {
        Polynomial Pnew;
        for (int i = 0; i < capacity; i++)
        {
            for (int j = 0; j < P.capacity; j++)
            {
                int deg = i + j;
                int coeff = (degCoeff[i] * P.degCoeff[j]) + Pnew.getCoeff(deg);
                Pnew.setCoefficient(deg, coeff);
            }
        }
        return Pnew;
    }

    void print()
    {
        for (int i = 0; i < capacity; i++)
        {
            if (degCoeff[i] != 0)
            {
                cout << degCoeff[i] << "x" << i << " ";
            }
        }
        cout << endl;
    }
};
