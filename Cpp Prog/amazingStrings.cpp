
/**
 * Check whether all the characters of s1 + s2 are there in s, also check s must have characters more than s1+s2 together
 * 
 * */
#include <unordered_map>
#include <map>
#include <iostream>
#include <stdio.h>
using namespace std;

string amazingStrings(string s1, string s2, string s)
{
    bool flag = true;
    unordered_map<char, int> ump;
    if (s1.length() + s2.length() != s.length())
    {
        cout << "NO";
    }
    else
    {
        for (char i : s)
            ump[i]++;
        // for (char i : s)
        //     cout << i << ":" << ump[i] << endl;
        for (char f : s1)
        {
            if (ump[f] == 0 && flag)
            {
                return "NO";
                flag = false;
                break;
            }
            else
                ump[f]--;
        }
        // cout << endl;
        // for (char i : s)
        //     cout << i << ":" << ump[i] << endl;
        for (char s : s2)
        {
            if (ump[s] == 0 && flag)
            {
                return "NO";
                flag = false;
                break;
            }
            else
                ump[s]--;
        }
        // cout << endl;
        // for (char i : s)
        //     cout << i << ":" << ump[i] << endl;
        return "YES";
    }
}

int main()
{
    string ans = amazingStrings("HI", "HEY", "EIHYH");
    cout << ans << "\n";
    return 0;
}