/**
    Leetcode
    Problem Link: https://leetcode.com/problems/valid-palindrome/
*/

class Solution {
public:
    bool isPalindrome(string s) {
        string newStr = "";
        for (int i = 0; i<s.length() ; i++) {
            if(isalpha(s[i]) || isdigit(s[i])) {
                
                if(int(s[i]) >= 65 && int(s[i]) <= 90)
                    newStr += (s[i] - 'A' + 'a');
                else newStr += s[i];
            }
        }
        int start = 0, end = newStr.length() - 1;
        while(start <= end) {
            if(newStr[start] != newStr[end]) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};