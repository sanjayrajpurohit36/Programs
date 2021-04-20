#     Array of unique numbers given ie [100, -4, 7, 0, -6, -8, 6, 8, -2, 10, 20, 30, 1, 4].
#     You have to return new array which will look like below
#     [-4, 4, -6, 6, -8,  8, -2, 0, 1, 7, 10, 20, 30, 100]
#     (Print 4, 6 & 8 has their negative numbers so print them first like -4, 4, -6, 6, -8,  8 & now print remaining numbers in a sorted way)
arr = [100, -4, 7, 0, -6, -8, 6, 8, -2, 10, 20, 30, 1, 4]#[ 1,3,4,-1,-3,50, 60, 70, 80]
Map = dict()
for i in arr:
    if(Map.get(i)):
        Map[i] = Map[i] + 1
    else:
        Map[i] = 1
keyArr = sorted(list(Map.keys()))
for i in keyArr:
    if(Map.get(i) > 0):
        print (( ((str(i))+',') *Map[i]) , end="")
        if (Map.get(i*-1) and i!= 0):
            print ((((str(i*-1)+','))*Map[i*-1]) , end="")
            Map[i*-1] = -1
            Map[i] = -1
print("\n")
