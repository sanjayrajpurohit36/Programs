#Medium Range Problem
# def binSearch(startTime, intervals):
#     first = 0
#     last= len(intervals)
#     while(first <= last):
#         mid= (first + last) //2
#         if(startTime >= mid[0] and startTime <=mid[1]):
            
#             break
#         if(mid[0] < startTime):
#             first = mid+1
#         else 
#             last = mid-1

def search(startTime, intervals):
    i = 0
    pos = -1
    sizeIntervals = len(intervals)
    for i in range(0,sizeIntervals):
        if(startTime >= intervals[i][0] and startTime <= intervals[i][1]):
            pos = i
            break
    return pos

def mergeIntervals(intervals):
    intervals = sorted(intervals)
    mergedIntervals = []
    for i in intervals:
        position = search(i[0], intervals)
        if(position!=-1):
            start = intervals[position][0]
            end = {True:intervals[position][1],False: i[1]}[intervals[position][1] > i[1]]
            if(len(mergedIntervals)):
                mergedIntervals.pop(position)
            mergedIntervals.append([start,end])
        else:
            mergedIntervals.append(i)
    print("MergedIntervals", mergedIntervals)


# mergeIntervals([[8,10],[1,3],[11,12],[2,6]]) #output [[1,6],[8,10], [11,12]]
# mergeIntervals([[1,4],[4,5]]) # output [[1,5]]
mergeIntervals([[6,8],[1,9],[2,4],[4,7]]) # output [[1,9]]