/**
    WAP to add all the digits of a number using recursion
    eg: n = 12345 
    output : 15
*/

#include<iostream>
using namespace std;

int sumOfDigits(int n) {
	if(n == 0) return 0;
    else {
        int sum =  n % 10;
        int digit = sumOfDigits(n/10);
        sum  = sum + digit;
        
        return sum;
    }
}

int main() {
    int i = 12345;
    cout << sumOfDigits(i) << endl;
    return 0;
}