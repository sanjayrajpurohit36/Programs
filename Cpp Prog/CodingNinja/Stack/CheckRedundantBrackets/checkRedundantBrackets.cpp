/*
        For a given expression in the form of a string, find if there exist any redundant brackets or not. It is given that the expression contains only rounded brackets or parenthesis and the input expression will always be balanced.
        A pair of the bracket is said to be redundant when a sub-expression is surrounded by unnecessary or needless brackets.

        Eg: Expression: (a+b)+c
            Since there are no needless brackets, hence, the output must be 'false'.

            Expression: ((a+b))
            The expression can be reduced to (a+b). Hence the expression has redundant brackets and the output will be 'true'.

*/


#include <iostream>
#include <string>
#include<stack>

using namespace std;

bool checkRedundantBrackets(string expression) {
	// Write your code here
	int i = 0;
	stack<char> st;
	while(expression[i]!= '\0') {
    	char ch = expression[i];
        if(ch == ')') {
            bool isArithmetic = false;

            while(st.top()!= '(') {
                char stackChar = st.top();
                if(stackChar == '+' || stackChar == '-' || 
                   stackChar == '/' || stackChar == '*') 
                {
                    isArithmetic = true;
                }
                st.pop();
            }
            st.pop();
            if(!isArithmetic) {
                return true;
            } 
        } else {
            st.push(expression[i]);
        }
    i++;
	}
    return false;
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        string input;
        cin >> input;
        cout << ((checkRedundantBrackets(input)) ? "true" : "false") << endl;
    }
}