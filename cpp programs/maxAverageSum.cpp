/**
 * You are given an integer array nums consisting of n elements, and an integer k.
 * Find a contiguous subarray whose length is equal to k that has the maximum average value and return this value. Any answer with a calculation error less than 10-5 will be accepted.
 * 
 * Example 1:
 * Input: nums = [1,12,-5,-6,50,3], k = 4
 * Output: 12.75000
 * Explanation: Maximum average is (12 - 5 - 6 + 50) / 4 = 51 / 4 = 12.75
 * 
 * Example 2:
 * Input: nums = [5], k = 1
 * Output: 5.00000 
 * 
 * 
 * Solution : Here we will use sliding window tech to calculate max sub array sum of size k then will return the average of that sum.
 * */
#include <iostream>
#include <vector>
#include <stdio.h>
#include <numeric>

using namespace std;
class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        double maxSum = 0;
        int currentMaxSum = accumulate(begin(nums), begin(nums) + k, 0); // sum of first k numbers in nums
        maxSum = currentMaxSum;
        for (int i = k; i < nums.size(); i++)
        {
            currentMaxSum += nums[i];
            currentMaxSum -= nums[i - k];
            if (currentMaxSum > maxSum)
                maxSum = currentMaxSum;
        }
        return (maxSum / k);
    }
};

int main()
{
    Solution obj;
    vector<int> test;
    test.push_back(1);
    test.push_back(12);
    test.push_back(-5);
    test.push_back(-6);
    test.push_back(50);
    test.push_back(3);
    cout << obj.findMaxAverage(test, 4);
    return 0;
}