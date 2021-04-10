# display func will print numbers ending with 0 in one line and numbers not ending with 0 in next one
def Display(num):
    noEndingWithZeros = []
    notEndingWithZeros = []
    
    for i in num:
        if(i%10 == 0):
            noEndingWithZeros.append(i)
        else:
            notEndingWithZeros.append(i)
    
    for i in noEndingWithZeros:
        print(i)
    for i in notEndingWithZeros:
        print(i, end=" ")

n = int(input("Enter ary length: "))
arr = []
for x in range(n):
    arr.append(int(input()))
Display(arr)