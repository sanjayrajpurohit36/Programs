/*
    WAP to remove all 'x' char present in a char array using recursion.

*/
#include<iostream>
using namespace std;

// Method 1
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

void removeXM1(char input[]) {
    removeXHelper(input);
}
//


// Method 2
void removeXM2(char *str) {
    if(str[0] == '\0') {
        return ;
    } else if(str[0] == 'x') {
        int i = 0;
        for(; str[i]!='\0'; i++) {
            str[i] = str[i+1];
        }
        str[i] = str[i+1];
        removeXM2(str);
    } 
    removeXM2(str + 1);
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
        removeXM2(arr);
        for(int i = 0 ; arr[i] != '\0'; i++) {
            cout << arr[i];
        } cout << endl;
    }
    return 0;
}