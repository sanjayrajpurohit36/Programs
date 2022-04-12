/*
    Remove duplicate chars from the given in string with the below given time and space complexity

    Time Complexity: O(n)
    Space Complexity: O(n)
*/
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<unordered_map>
using namespace std;

void removeDuplicates(string str) 
{
    unordered_map<char, bool> ump;
    int rp = 0, wp = 0;
    while(rp < str.length()) {

        if(!ump[str[rp]]) {
            ump[str[rp]] = true;
            str[wp] = str[rp];
            wp++;
            rp++;
        } else
            rp++;
    }
    cout << str.substr(0, wp) << endl;
}

int main()
{
    int T;
    cin >> T;
    while(T--) {
        string str;
        getline(cin, str);
        removeDuplicates(str);
    }
    return 0;
}