/*
    Print all the subsequences of a string
*/
#include<iostream>

using namespace std;

void subsequences(string input, string output) {
    if(input.empty()) {
        cout << output << endl;
        return;
    }

    subsequences(input.substr(1), output); // call with not the including first char of input in output
    output += input[0];
    subsequences(input.substr(1), output); // call with the including first char of input in output
}

int main () {
    string input;
    cin >> input;
    string output = "";
    subsequences(input, output);
    return 1;
}