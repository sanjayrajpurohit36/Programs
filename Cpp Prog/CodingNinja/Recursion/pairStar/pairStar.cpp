/**
    Given a string S, compute recursively a new string where identical chars that are adjacent in the original string are separated from each other by a "*".
    Input: hello
    Output: hel*lo

    Input: aaaa
    Output: a*a*a*a
*/


// Change in the given string itself. So no need to return or print the changed string.
#include<iostream>
using namespace std;

void addStar(char input[], int index = 0) {
    if(input[index] == '\0' ) return;
    if(input[index] == input[index+1]) {
        char ch = '*';
        int i;
        for( i = index+1; input[i]!='\0'; i++) {
            char temp = input[i];
            input[i] = ch;
            ch = temp;
        }
        input[i] = ch;
        input[++i] = '\0';
        index += 1;
    } else index += 1;
    return addStar(input, index);
}

void pairStar(char input[]) {
    addStar(input);
}


int main() { 
    char arr[]  =  {'h','h','h','h','l','o'};
    addStar(arr);
    for( int i = 0 ; arr[i]!='\0'; i++) cout << arr[i]; 
    return 0;
}