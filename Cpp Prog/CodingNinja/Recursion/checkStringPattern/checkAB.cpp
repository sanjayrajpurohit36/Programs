#include<iostream>
#include<string.h>
using namespace std;

/*
    a. The string begins with an 'a'
    b. Each 'a' is followed by nothing or an 'a' or "bb"
    c. Each "bb" is followed by nothing or an 'a'
*/

// Approach 1
bool helper1 (char str[], int index, bool isa = false) {
    // base case
    if(str[0] != 'a')  return false;
    if(str[index] == '\0') return true;
	
    if(str[index] == 'a') {
        return helper1(str, ++index, true);
    }else {
        if(!isa && str[index] == 'a') {  // 2 b's are already there now it has to be an 'a'
    	    return helper1(str, ++index, true);
        } else if(str[index] == 'b' && str[index+1] == 'b') {
            return helper1(str, index + 2, false);
        } else return false;
    }
}

/* 
    Approach 2
    This function can directly be written in checkAB
    this is much optimized code
*/
bool helper2(char input[]) { 
    // base case if char is NULL char
    bool ans = false;
    if(input[0] == '\0') return true;
    if(input[0] == 'a') {
        if(input[1] == 'b' && input[2] == 'b') {
            ans = helper2(input + 3);
        } else ans = helper2(input + 1);
        return ans;
    } else return ans;
}

bool checkAB(char input[]) {
    return helper1(input, 0);
	// return helper2(input);
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        int size;
        cin >> size;
        char *str = new char[size];
        for(int i = 0 ; i < size; i++) {
            cin >> str[i];
        }
        cout << checkAB(str) << endl;
    }
    return 0;   
}