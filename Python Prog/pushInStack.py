# display word count per line in a file Mydiary.txt
def PUSH_IN(L):
    stack = []
    top = -1
    for i in L:
        if(i%2 == 0):
            stack.append(i)
            top+=1
n = int(input("Enter list length: "))
arr = []
for x in range(n):
    arr.append(int(input()))
PUSH_IN(arr)