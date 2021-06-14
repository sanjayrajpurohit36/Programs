// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Output: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:

// Input: nums = [3,2,4], target = 6
// Output: [1,2]
// Example 3:

// Input: nums = [3,3], target = 6
// Output: [0,1]

/**
 * Write a program to return the indexes of paris whose sum is equals to the given target
 * @param {*} nums
 * @param {*} target
 * @returns {Array}
 */
var twoSum = function (nums, target) {
  let diffMap = {};
  let ans = [];
  nums.map((value, key) => {
    if (diffMap[target - value] >= 0) {
      ans.push(key, diffMap[target - value]);
    } else diffMap[value] = key;
  });
  return ans;
};

console.log(twoSum([2, 7, 11, 15], 9));
