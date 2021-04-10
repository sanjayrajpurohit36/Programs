def unionAndIntersecton(arr1, arr2):
    value_map = dict()
    intersectionValue_map = dict()
    union = [] 
    intersection = []
    #union
    for i in range(len(arr1)):
        if(value_map.get(arr1[i]) != True): 
            intersectionValue_map[arr1[i]] = True
            value_map[arr1[i]] = True
            union.append(arr1[i])
    
    for i in range(len(arr2)):
        if(value_map.get(arr2[i]) != True): 
            value_map[arr1[i]] = True
            union.append(arr2[i])
    
    print("union:=>", end = "")
    for i in union: 
        print(i, end=" ")
    
    #intersection
    for i in range(len(arr2)):
            if(intersectionValue_map.get(arr2[i])):
                intersection.append(arr2[i])
    
    print("intersection:=>", end = "")
    for i in intersection:
        print(i, end=" ")

n = int(input())
m = int(input())
arr1 = []
arr2 = []
for i in range(0,n):
    x=int(input())
    arr1.append(x)
i=0
for i in range(0,m):
    y=int(input())
    arr2.append(y)
unionAndIntersecton(arr1, arr2)

