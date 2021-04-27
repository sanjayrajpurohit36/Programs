# Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
# There is only one repeated number in nums, return this repeated number. 

class DuplicateNumberSolution:
    def findDuplicate(self, nums):
        freq = dict()
        for i in nums:
            if(i in freq.keys()):
                return i
            else:
                freq[i] = 1

obj = DuplicateNumberSolution()
print("duplicate no: ",obj.findDuplicate([1,3,4,2,2])) # ans 2
print("duplicate no: ",obj.findDuplicate(([3,1,3,4,2]))) # ans 3