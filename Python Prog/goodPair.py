# Given an array of integers nums.
# A pair (i,j) is called good if nums[i] == nums[j] and i < j.
# Return the number of good pairs.
#
#
# Input: nums = [1,2,3,1,1,3]
# Output: 4
# Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.
#
# Input: nums = [1,1,1,1]
# Output: 6
# Explanation: Each pair in the array are good.
#
#
# Input: nums = [1,2,3]
# Output: 0


def goodPair(arr):
    mp = dict()
    pairCounter = 0
    for i in arr:
        if mp.get(i, 0):
            mp[i] += 1
        else:
            mp[i] = 1

    for i in mp.keys():
        pairCounter += mp[i] * (mp[i] - 1) // 2
    print(pairCounter)


goodPair([1, 2, 5, 2, 1, 1])
