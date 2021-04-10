def findPair(arr, Sum):
    Map = dict()
    print (Map)
    for i in arr: 
        # print i
        # Map[sum-i] = i
        # diff = Sum - i
        print(Map.values())
        if(i in Map.values()):
            print("pair exist")
            return "true"
        else: 
            Map[i] = Sum-i
    print("printing Map",Map) 


# function call
findPair([1,2,3,4,5], 7)
