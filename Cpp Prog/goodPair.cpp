/**
 * Given an array of integers nums.
 * A pair (i,j) is called good if nums[i] == nums[j] and i < j.
 * Return the number of good pairs.
 * 
 * 
 * Input: nums = [1,2,3,1,1,3]
 * Output: 4
 * Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.
 * 
 * Input: nums = [1,1,1,1]
 * Output: 6
 * Explanation: Each pair in the array are good.
 * 
 * 
 * Input: nums = [1,2,3]
 * Output: 0
 * */
#include <iostream>
#include <stdio.h>
#include <vector>
#include <unordered_map>

using namespace std;
class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        unordered_map<int, int> ump;
        for (int i : nums)
            ump[i]++;

        int num = 0;
        for (auto i : ump)
            num += (i.second * (i.second - 1)) / 2; // Sum of n natural numbers

        return num;
    }
};

int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(3);
    Solution obj;
    cout << obj.numIdenticalPairs(nums);
    return 0;
}