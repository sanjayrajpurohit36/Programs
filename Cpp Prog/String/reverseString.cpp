/**
 * Problem: Reverse a string
 * 
 * */
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>
using namespace std;
class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int i, j;
        for (i = 0, j = s.size() - 1; i <= s.size() / 2 && j >= s.size() / 2; i++, j--)
        {
            swap(s[i], s[j]);
        }
    }
};

int main()
{
    vector<char> s1;
    s1.push_back('h');
    s1.push_back('e');
    s1.push_back('l');
    s1.push_back('l');
    s1.push_back('o');
    Solution obj;
    obj.reverseString(s1);
    for (int i = 0; i < s1.size(); i++)
        cout << s1[i];
    return 0;
}