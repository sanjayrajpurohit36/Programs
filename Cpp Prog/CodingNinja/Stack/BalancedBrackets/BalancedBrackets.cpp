/*
    Write a program to check whether an expression is having balanced brackets or not
*/

#include<iostream>
#include<stack>

using namespace std;

bool isBalanced(string expression) 
{
    // Write your code here
    stack<char> st;
    if(expression[0] == '\0') return true;
    int i = 0;
    while(expression[i]!='\0') {
        if(expression[i] == '(' || expression[i] == '{' || expression[i] == '[') {
            st.push(expression[i]);
        }
        if(expression[i] == ')' && !st.empty()) {
            char stTopChar = st.top();
            st.pop();
            if(stTopChar != '(') return false;
        }
        if(expression[i] == '}' && !st.empty()) {
            char stTopChar = st.top();
            st.pop();
            if(stTopChar != '{') return false;
        }
        if(expression[i] == ']' && !st.empty()) {
            char stTopChar = st.top();
            st.pop();
            if(stTopChar != '[') return false;
        }
        i++;
    }
    if(st.size() == 0) return true; 
}

int main() {
    int T;
    cin >> T;
    while (T--)
    {
        string str;
        cin >> str;
        bool ans = isBalanced(str);
        cout << ans << endl;
    }
    return 0;
}