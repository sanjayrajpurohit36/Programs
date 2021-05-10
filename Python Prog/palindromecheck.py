a = "a b s b a".split(" ")
l = len(a)
print(a[0 : l // 2] == a[l : l // 2 : -1])
