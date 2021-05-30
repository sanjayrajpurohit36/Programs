class Solution:
    def twoSum(self, list, target):
        sumDict = dict()
        for element in list:
            dict[element] = target - element
        print(sumDict)


ObjS = Solution()
ObjS.twoSum([1, 2, 3, 4, 5], 3)
