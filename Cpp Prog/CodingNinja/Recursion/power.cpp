/** 
    WAP to find the power of a number (number^power) using Recursion.
*/

#include <iostream>

using namespace std;
// x =  number , n = power
int calcPower(int x, int n) {
    if(n == 0) return 1;
	
    int smallans = calcPower(x,n-1);
    int ans = x * smallans;
    
    return ans;
}

int main() {
    int number, power;
    cout << "Enter Number & Power: ";
    cin >> number >> power;
    int ans = calcPower(number, power);

    cout << ans;
    return 0;
}