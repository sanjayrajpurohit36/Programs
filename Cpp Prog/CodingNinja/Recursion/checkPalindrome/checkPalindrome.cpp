/**
    WAP to check whether a string is palindrome or nor using recursion.
    Note: in the below program si =  Start Index & ei = End Index
*/


#include<iostream>
using namespace std;

#include<string.h>

bool helper(char input[], int si, int ei){
    if(ei < si)return true;
    if(input[si] != input[ei])return false;
    return helper(input, si+1, ei-1);
}
bool checkPalindrome(char input[]) {
    int n=strlen(input);
    return helper(input, 0, n-1);
}

int main() {
    int T;
    cin >> T;
    while(T--) {
    int size;
    cin >> size;
    char *arr = new char[size];
    for(int i = 0 ; i < size; i++) {
        cin >> arr[i];
    }
    cout << checkPalindrome(arr) << endl;
    }
    return 0;
}