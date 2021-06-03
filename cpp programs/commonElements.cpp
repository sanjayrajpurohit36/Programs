#include <iostream>
#include <stdio.h>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    vector<string> findCommon(vector<string> words)
    {
        unordered_map<char, int> ump;
        unordered_map<char, int> umps;
        unordered_map<char, int>::iterator itr;
        vector<string> ans;
        for (char i : words[0])
        {
            ump[i]++;
        }
        for (int i = 1; i < words.size(); i++)
        {
            umps.clear(); // clearing the unordered map for every string.
            for (int j = 0; j < words[i].size(); j++)
                umps[words[i][j]]++;
            for (itr = ump.begin(); itr != ump.end(); ++itr)
            {
                cout << itr->first << ump[itr->first] << umps[itr->first] << endl;
                if (ump[itr->first] != umps[itr->first])
                {
                    ump[itr->first] = min(ump[itr->first], umps[itr->first]);
                }
            }
        }
        for (itr = ump.begin(); itr != ump.end(); ++itr)
        {
            if (ump[itr->first] != 0)
            {
                for (int j = 0; j < itr->second; j++)
                {
                    ans.push_back(string(1, itr->first));
                }
            }
        }
        return ans;
    }
};
int main()
{
    string arr[] = {"cool", "lock", "cook"};
    vector<string> str(arr, arr + sizeof(arr) / sizeof(*arr));
    Solution obj;
    vector<string> ans = obj.findCommon(str);
    // for (string i : ans)
    //     cout << char(i - 97) << " ";

    return 0;
}
