# Program to merge overlapping intervals
class Solution:
    def merge(self, intervals):
        intervals = sorted(intervals)
        mergedIntervals = []
        sizeIntervals = len(intervals)
        count = -1
        for i in range(0,sizeIntervals):
            if(len(mergedIntervals) ==0 or intervals[i][0] > mergedIntervals[count][1] ):
                mergedIntervals.append(intervals[i])
                count+=1
            else:
                
                if(mergedIntervals[count][1] >= intervals[i][0]):
                    mergedIntervals[count][1] = max(mergedIntervals[count][1], intervals[i][1])
        return mergedIntervals

Object = Solution()
print(Object.merge([[8,10],[1,3],[11,12],[2,6]])) #output [[1,6],[8,10], [11,12]]
# mergeIntervals([[1,4],[4,5]]) # output [[1,5]]
# mergeIntervals([[6,8],[1,9],[2,4],[4,7]]) # output [[1,9]]