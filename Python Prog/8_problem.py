def rotation(arr, rotation, size) :
    print("--------Rotation-------")
    rotation = rotation % size
    for i in range(len(arr)):
        if(i < rotation) :
            print(arr[size + i - rotation])
        else :
            print(arr[i - rotation])


noOfRotation = int(input("Enter the no. of rotation"))
sizeOfArray = int(input("Enter the size of array"))
arr = []
for i in range(0 , sizeOfArray):
    x = int(input())
    arr.append(x)
rotation(arr, noOfRotation, sizeOfArray)