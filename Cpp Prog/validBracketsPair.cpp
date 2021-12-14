/**
        Valid Parenthesis
        Problem Link: https://leetcode.com/problems/valid-parentheses/
        Statement: 
            Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

            An input string is valid if:

            Open brackets must be closed by the same type of brackets.
            Open brackets must be closed in the correct order.
*/

#include<iostream>
#include<stdio.h>
#include<stack>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> brackets ;
        brackets[')'] = '(';
        brackets['}'] = '{';
        brackets[']'] = '[';

        for(int i = 0; i < s.length(); i++){
            if(s[i] == '{' || s[i] == '[' || s[i] == '(') {
                st.push(s[i]);
            }
            else {
                if(!st.empty()) {
                    if(brackets[s[i]] != st.top()) {
                        break;
                    }    
                    st.pop();
                } else {
                    return false;
                }
                
            }
        }
        return !st.empty() ? true : false;
    }
};


int main () {
    Solution S;
    cout << S.isValid("[");
    return 0;
}