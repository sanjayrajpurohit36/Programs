def twoSum(nums, target):
    sumDict = dict()
    validate = dict()
    uniquePairPos = []
    for i in range(0, len(nums)):
        sumDict[nums[i]] = nums[i] - target
        validate[nums[i]] = i
    for i in range(0, len(nums)):

        diffPos = validate.pop(sumDict[nums[i]], -1)
        print(diffPos)
        if diffPos >= 0:
            uniquePairPos = [i, diffPos]

    return uniquePairPos


print(twoSum([2, 7, 11, 15], 9))
{2: 7, 7: 2, 11: -2, 15: -6}
