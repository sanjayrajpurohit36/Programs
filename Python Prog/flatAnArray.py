def flat(arr):
    flattenedAry = []
    for i in arr:
        if(type(i) == int):
            flattenedAry.append(i)
        else:
            flattenedAry.append(i[0:len(i)])
    return flattenedAry


print( "Flattened Array =>", flat([1,2,3,[4,5,6],[1,1,2],9,7,9,[2,3]]))