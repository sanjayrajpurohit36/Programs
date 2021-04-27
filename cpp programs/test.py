a = [1,0,2,3]
b= [1,2,3,4,5]
for i in range(len(a)):
    if(a[i] in b):
        print(a[i],"overalap")
    else:
        print(a[i],"seprated")