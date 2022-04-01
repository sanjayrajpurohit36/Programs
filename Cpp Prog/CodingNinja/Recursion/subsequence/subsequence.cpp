/*
    Print all the subsequences of a string
*/
#include<iostream>

using namespace std;

int subsequences(string input, string output[]) {
    if(input.empty()) { // base case
        output[0] = "";
        return 1;
    }
    string smallString = input.substr(1);
    int smallStringSubsLen = subsequences(smallString, output);

    for (int i = 0; i < smallStringSubsLen; i++) {
        output[i + smallStringSubsLen] = input[0] + output[i];
    }
    
    return (2 * smallStringSubsLen);
}

int main () {
    string input;
    cin >> input;
    string *output = new string[1000];
    int size = subsequences(input, output);
    for (int i = 0; i < size; i++ ) {
        cout << output[i] << "\n";
    }
    return 1;
}