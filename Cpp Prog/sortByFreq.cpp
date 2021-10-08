/*
    Very imp question in arrays includes lots of vector, map and pair concepts along with custom sort function.
*/
#include <iostream>
#include <stdio.h>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    static bool cmp(pair<int, pair<int, int> > a, pair<int, pair<int, int> > b)
    {
        if (a.second.second != b.second.second)
            return a.second.second < b.second.second;
        else
            return a.second.first > b.second.first;
    }

    vector<int> frequencySort(vector<int> &nums)
    {
        unordered_map<int, pair<int, int> > ump;
        vector<pair<int, pair<int, int> > > sortedVector;
        vector<int> ans;
        for (int i : nums)
        {
            if (ump.find(i) != ump.end())
            {
                ump[i].second++;
            }
            else
            {
                ump[i] = (make_pair(i, 1));
            }
        }

        // create a vector which can store the map values in it i.e sortedVector
        unordered_map<int, pair<int, int> >::iterator itr;
        for (itr = ump.begin(); itr != ump.end(); itr++)
        {
            sortedVector.push_back(make_pair(itr->first, itr->second));
        }
        sort(sortedVector.begin(), sortedVector.end(), cmp); // sort the vector according to the cmp function

        for (int j = 0; j < sortedVector.size(); j++)
        {
            for (int k = 0; k < sortedVector[j].second.second; k++)
            {
                ans.push_back(sortedVector[j].first);
            }
        }
        return ans;
    }
};

int main()
{
    int arr[] = {1, 1, 2, 3, 3, 3, 4, 4, 4, 4, 4};
    vector<int> vec(arr, arr + sizeof(arr) / sizeof(*arr));
    Solution obj;
    vector<int> ans = obj.frequencySort(vec);
    for (int i : ans)
        cout << i << " ";
    return 0;
}
