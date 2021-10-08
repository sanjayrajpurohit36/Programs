/**
 * Returns all the pairs whose sum is equal to given target.
 * Perfect solution
 * 
 * */
#include <iostream>
#include <vector>
#include <unordered_map>
#include <stdio.h>

using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> diffMap;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            if (diffMap.count(target - nums[i]))
            {
                ans.push_back(i);
                ans.push_back(diffMap[target - nums[i]]);
            }
            diffMap[nums[i]] = i;
        }
        return ans;
    }
};

int main()
{
    vector<int> arr, ans;
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(4);
    int t = 6;
    Solution obj;
    ans = obj.twoSum(arr, t);
    for (int i = 0; i < ans.size(); i++)
        cout
            << ans[i] << " ";
    return 0;
}