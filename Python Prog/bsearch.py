def bSearch(arr, left, right, searchElement):
    if right >= left:
        mid = (left + right) // 2
        if(arr[mid] == searchElement):
            return mid
        elif(arr[mid] > searchElement):
            right = mid -1
            return bSearch(arr, left, right, searchElement)
        elif(arr[mid] < searchElement):
            left = mid+1
            return bSearch(arr, left, right, searchElement)
    else:
        return -1



arr = [1,2,3,4,5,6,7,8,9,10]
left = 0
right = len(arr) - 1
element = int(input("Enter element to be searched: =>"))
position =  bSearch(arr, left, right, element)
print("Element found at ", position)
