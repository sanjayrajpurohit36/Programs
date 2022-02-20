                                        // String to Integer
#include<iostream>
#include<math.h>
using namespace std;

int stringToNumber(char input[]) {
    int digit = input[0];
    if(digit == '\0') return 0;
    int ten = pow(10, (strlen(input) - 1));
    // cout << ten << endl;
    return ((digit - 48) * ten) + stringToNumber(input+1);
}

int main() { 
    // char arr[]  =  {'1','0','1','2','3'}; // 10123 
    char arr[] = {'0', '0', '1','0', '1'}; // 101
    int ans = stringToNumber(arr);
    cout << ans;
    return 0;
}