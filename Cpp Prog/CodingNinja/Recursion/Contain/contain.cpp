/*
    Given two string s and t, write a function to check if s contains all characters of t (in the same order as they are in string t).
    Return true or false.
    E.g. : s = “abchjsgsuohhdhyrikkknddg” contains all characters of t=”coding” in the same order. So function will return true.
*/

#include<iostream>
#include<string.h>
using namespace std;

bool contains(string s, string t) {
    int slen = s.length();
    int i = 0,j = 0;
    while(i < slen) {
        if(s[i] == t[j]) {
            j++;
        }
        i++;
    }
    if(j == t.length()) {
        return true;
    }
    return false;
}

int main()
{
    int T;
    string s, t;
    cin >> s >> t;

    cout << contains(s, t) << endl;
    return 0;
}