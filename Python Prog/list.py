a=[1,2,3,4,5]
i=0
sum=0
while i <len(a):
    if(a[i]%2!=0):
        sum=a[i]+sum
    i=i+1
print("sum of odd number in list is",sum)                