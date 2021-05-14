# Arrange a given array in alternative sequence of negative and positive numbers
# Here I've taken O(n) extra space complexity but I want to do it in O(1) of extra complexity
def arrangeAlternative(arr):
    positiveArr = []
    negativeArr = []
    for i in arr:
        if i >= 0:
            positiveArr.append(i)
        else:
            negativeArr.append(i)
    Pl = len(positiveArr)
    Nl = len(negativeArr)
    i = 0
    j = 0
    while True:
        print(negativeArr[i], end=" ")
        i += 1
        print(positiveArr[j], end=" ")
        j += 1
        if i >= Nl:
            for k in range(j, Pl):
                print(positiveArr[k], end=" ")
            break
        elif j >= Pl:
            for k in range(i, Nl):
                print(negativeArr[k], end=" ")
            break


# arr = [1, 2, -1, 1, -7, -8, -9, 0, -1, -2, -3]
# arr = [1, 2, 3, -4, -1, 4]
arr = [-5, -2, 5, 2, 4, 7, 1, 8, 0, -8]
arrangeAlternative(arr)
