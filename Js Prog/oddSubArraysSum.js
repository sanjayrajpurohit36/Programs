/*
Given an array of positive integers arr, calculate the sum of all possible odd-length subarrays.
A subarray is a contiguous subsequence of the array.
Return the sum of all odd-length subarrays of arr.
Example 1:

Input: arr = [1,4,2,5,3]
Output: 58
Explanation: The odd-length subarrays of arr and their sums are:
[1] = 1
[4] = 4
[2] = 2
[5] = 5
[3] = 3
[1,4,2] = 7
[4,2,5] = 11
[2,5,3] = 10
[1,4,2,5,3] = 15
If we add all these together we get 1 + 4 + 2 + 5 + 3 + 7 + 11 + 10 + 15 = 58
Example 2:

Input: arr = [1,2]
Output: 3
Explanation: There are only 2 subarrays of odd length, [1] and [2]. Their sum is 3.
Example 3:

Input: arr = [10,11,12]
Output: 66
*/

// print sum of all odd subarrays this solution has time complexity of O(n^2)
function oddSubSum(arr) {
  let windowSize = 1;
  let allSubAry = [];
  let allSubArySum = 0;
  while (windowSize <= arr.length) {
    arr.map((element, key) => {
      if (key + windowSize <= arr.length) {
        let slicedAry = arr.slice(key, key + windowSize);
        // console.log(key, slicedAry);
        allSubAry.push(slicedAry);
      }
    });
    windowSize += 2; // added 2 to make windowsum as odd always
  }
  allSubAry.forEach((element) => {
    allSubArySum += element.reduce((a, b) => a + b);
  });
  // console.log(allSubAry); for printing all the subarrays
  console.log(allSubArySum);
}

oddSubSum([1, 4, 2, 5, 3]); // 58
oddSubSum([1, 2]); //3
oddSubSum([10, 11, 12]); // 66
