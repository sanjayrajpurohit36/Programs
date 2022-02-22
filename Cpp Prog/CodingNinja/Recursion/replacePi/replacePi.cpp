/*
    Given a string, compute recursively a new string where all appearances of "pi" have been 
    replaced by "3.14".
*/

#include<iostream>
using namespace std;

char PI[] = {'3','.','1','4'};

void removeRPi(char input[], int index = 0) {
    if(input[index] == '\0') return;
    if(input[index] == 'p' && input[index + 1] == 'i') {
        int i = 0, j = index;
        for (i; input[i]!='\0'; i++);
        i += 2;
        while(i!= index + 2) {
            input[i] = input[i-2];
            i--;
        }
        int k = 0;
        for(j = index; j < index + 4; j++) {
            input[j] = PI[k++];
        }
        removeRPi(input, index + 4);
    } else removeRPi(input, index + 1);
}

int main() {  
    // char arr[] = {'p','i','p','i','l','0'};
    char arr[] = {'x', 'p', 'i', 'p', 'i','x'};
    removeRPi(arr);
    for( int i = 0 ; arr[i]!='\0'; i++) cout << arr[i]; 
    return 0;
}