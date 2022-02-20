                                        // String to Integer
#include<iostream>
#include<math.h>
using namespace std;

// Function to remove invalid zeros from the given char array
void removeInvalidZeros(char input[], bool flag = false, int index = 0) {
    if(input[index] == '\0') return;
    /* 
        if the char is '0' and flag is false then, bring all the characters one step back 
        to remove the invalid zero.
        Ex: 00100
        when the first zero is encountered then we will bring every char one index back
        in order to remove the invalid zero and will continue the recursion from the same index
        to check even if the next char which has been copied to the current index is an invalid zero or not
        00100 -> 0100
        0100 -> 100
        and once we reach '\0' we'll stop the recursion.
    */
    if(input[index] == '0' && !flag) {
        if(input[index+1] == '\0') return;
        for(int i = index; input[i] != '\0'; i++) {
            input[i] = input[i+1];
        }
        removeInvalidZeros(input, flag, index);
    } 
    // if the char is other than zero and flag is true then continue the recursion with next element
    if(input[index] != '0') {
        flag = true;
        removeInvalidZeros(input, flag, ++index);
    }
}

int main() { 
    // char arr[]  =  {'1','0','1','2','3'}; // 10123 
    char arr[] = {'0', '0', '1','0', '1'}; // 101
    removeInvalidZeros(arr);
    int i;
    for(i = 0; arr[i]!= '\0'; i++);
    int len = i - 1;
    int ans = 0;
    while(i--) {
        int digit = int(arr[i]) - 48;
        ans = ans + (digit * pow(10, (len - i)));
        // cout <<  ans << endl;
    }
    cout << ans; // final ans when char array is converted into number;
    return 0;
}