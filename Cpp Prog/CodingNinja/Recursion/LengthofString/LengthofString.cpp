/**
    WAP to check whether a string is palindrome or nor using recursion.
    Note: in the below program si =  Start Index & ei = End Index
*/


#include<iostream>
#include<string.h>

using namespace std;

int length(char *str, int index = 0) {
    if(str[0] == '\0') {
        return 0;
    } else return  (1 + length(str + 1, index + 1));
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
    cout << length(arr) << endl;
    }
    return 0;
}