# WAP which returns an number which exists in array only once. If there is no such number then return -1

def occursOnce(a):
    # Write your code here
    ump = dict()
    ans = -1
    
    for ele in a:
        if ele in dict.keys(ump):
            ump[ele] += 1
        else:
            ump[ele] = 1
    #  print(ump) # checking the formed dictionary
    
    for ele in a:
        if ump[ele] == 1:
            ans = ele
    return ans

print(occursOnce([1, 1, 3])) # 3
print(occursOnce([0,0,0,0,0])) # -1
