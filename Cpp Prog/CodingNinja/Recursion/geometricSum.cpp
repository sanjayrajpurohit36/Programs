/*
    WAP such that for any given k, find the geometric sum i.e.
        1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k) 
    using recursion.

    Constraint: 0 <= k <= 1000

    Input : 3
    Output : 1.87500

    Input : 4
    Output : 1.93750 
*/


#include<iostream>
#include<math.h>

using namespace std;

double geometricSum(int k) {
    // Write your code here
	if(k == 0) return 1;
    else {
        double currentVal = 1 / pow(2,k);
        double ans = geometricSum(--k);
        return currentVal + ans;
    }
}

int main() {
    cout << geometricSum(3);
    return 0;
}