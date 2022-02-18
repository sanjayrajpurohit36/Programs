/*
    WAP to remove all 'x' char present in a char array using recursion.

*/
#include<iostream>
using namespace std;

void removeXHelper(char input[], int index = 0, int xIndex = 0) {
    if(input[index] == '\0') { 
        input[index-xIndex] = '\0';
        return ;
    }
    else {
        if(input[index] == 'x') xIndex += 1;
    	else {
            input[index - xIndex] = input[index];
        }
        removeXHelper(input, index+1, xIndex);
    }
}

void removeX(char input[]) {
    removeXHelper(input);
}

int main() { 
    // char arr[] = {'x','a','b','x','c','x'}; // output : abc
    // char arr[] = {'x','x'}; // output: empty
    removeX(arr);
    for( int i = 0 ; arr[i]!='\0'; i++) cout << arr[i]; 
    return 0;
}