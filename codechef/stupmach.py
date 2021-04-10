t = int(input())
while(t):
    t=t-1
    n = int(input())
    boxesCapacity = []
    for x in range(int(n)):
        boxesCapacity.append(int(input()))
    maxTokens = 0
    for x in range(len(boxesCapacity)):
        maxTokens = maxTokens + min(boxesCapacity[:x+1])
    print(maxTokens) 


    