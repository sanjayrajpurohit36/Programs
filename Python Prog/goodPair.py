def goodPair(arr):
    mp = dict()
    pairCounter = 0
    print(2 in mp.keys())
    for i in arr:
        if i in mp.keys():
            mp[i]["hw"].append(i)
            pairCounter += mp[i]["size"]
            mp[i]["size"] += 1
        else:
            mp[i] = {"hw": [i], "size": 1}
    print(pairCounter)


goodPair([1, 2, 5, 2, 1, 1])
