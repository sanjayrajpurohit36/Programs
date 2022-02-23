/*
    Given an input string S and two characters c1 and c2, you need to replace every occurrence of character c1 with character c2 in the given string.
    Do this recursively.
*/
#include<iostream>
using namespace std;

void replaceCharacter(char input[], char c1, char c2) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * No need to print or return the output. 
     * Change in the given input string itself.
     * Taking input and printing output is handled automatically.
     */
     if(input[0] == '\0') {
        return ;
    } else if(input[0] == c1) {
        input[0] = c2;
    } 
    replaceCharacter(input + 1, c1, c2);
    
}

int main() { 
    int T;
    cin >> T;
    while(T--) {
        int size;
        cin >> size;
        char c1, c2;
        char *arr = new char[size];
        for(int i = 0 ; i < size; i++) {
            cin >> arr[i];
        }
        cin >> c1 >> c2; 
        replaceCharacter(arr, c1, c2);
        for(int i = 0 ; arr[i] != '\0'; i++) {
            cout << arr[i];
        } cout << endl;
    }
    return 0;
}