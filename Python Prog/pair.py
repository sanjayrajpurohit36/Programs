def findPair(arr,k):
    Map = dict()
    count = 0
    for i in arr:
        # if( (k-i) not in Map.values()):
        Map[k-i] = True # insert difference in Map with its value True
    for i in arr:
        if(k-i != i):
            if(i in Map.keys() and Map[i] == True):
                Map[i] = False
                count += 1
    return count


# function call
ans = findPair([1,1,1,1,1,1], 2)
print("ans =>", ans)
