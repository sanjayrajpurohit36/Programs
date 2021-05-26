/**
 * Problem: Print all the duplicate chars in the string. 
 * 
 **/

#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <stdio.h>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    void showDuplicate(string s)
    {
        unordered_map<char, int> uMap;
        int len = s.length();
        // for (int i = 0; i < len - 1; i++) // created frequency map for chars of string.
        // {
        //     if (uMap[s[i]])
        //         uMap[s[i]] = uMap[s[i]] + 1;
        //     else
        //         uMap[s[i]] = 1;
        // }
        for (auto x : s) // created frequency map for chars of string using range based loop.
        {
            if (uMap[x])
                uMap[x] = uMap[x] + 1;
            else
                uMap[x] = 1;
        }
        for (auto x : uMap)
            cout << x.first << " : " << x.second << endl;
    }
};
int main()
{
    string s = "Tom is a very bad cat.";
    cout << s << s.length();
    // for (int i = 0; i < s.length(); i++)
    //     cout << s[i]; // works
    Solution obj;
    obj.showDuplicate(s);
    // range based loop;
    // for (auto x : s) // works
    //     cout << x;
    return 0;
}