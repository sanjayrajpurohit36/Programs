/* 

    Leetcode Problem: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

*/

#include<iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int f = getPosition(nums, target, "first");
        int l = getPosition(nums, target, "last");
        
        ans.push_back(f);
        ans.push_back(l);
        return ans;
    }

    int getPosition(vector<int> &nums, int target, string pos) {
        int start = 0;
        int end = nums.size() - 1;
        int position = -1;

        while (start <= end)
        {
            int mid = (start + end) / 2;
            if (nums[mid] == target)
            {
                position = mid;
                if(pos == "first")
                    end = mid - 1;
                else
                    start = mid + 1;
            }
            if(nums[mid] > target) {
                end = mid - 1;
            }
            if(nums[mid] < target) {
                start = mid + 1;
            }
        }
        return position;
    }
};

int main() {
    vector<int> v;
    int size, target;
    cin >> size;
    for (int i = 0; i < size; i++) {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    cin >> target;
    Solution S;
    v = S.searchRange(v, target);
    for (int i = 0; i < v.size(); i++) {
        cout << v.at(i) << " ";
    }
    return 0;
}
