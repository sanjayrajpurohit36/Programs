/*
A pangram is a sentence where every letter of the English alphabet appears at least once.
Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.

Example 1:

Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
Output: true // 1
Explanation: sentence contains at least one of every letter of the English alphabet.
Example 2:

Input: sentence = "leetcode"
Output: false  // 0
*/

#include <iostream>
#include <stdio.h>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class Solution
{
public:
    bool checkIfPangram(string sentence)
    {
        unordered_set<char> uset;
        unordered_map<char, bool> ump;
        for (char c : sentence)
            uset.insert(c); // uset uses insert function to insert the values.
        return uset.size() == 26 ? true : false;
    }
};

int main()
{
    string sentence = "thequickbrownfoxjumpsoverthelazydog";
    Solution obj;
    cout << obj.checkIfPangram(sentence);
    return 0;
}