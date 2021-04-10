working code
t=int(input())
while (t):
    expression = input()
    stack=[]
    top=-1
    count=0
    t-=1
    validStart=0
    if(expression[0] == '<'):
        validStart = 1
    if(validStart):
        for i in expression:
            # print("start stack",stack)
            if(i=='<'):
                stack.append(i)
                top+=1
                # print("inserted stack",stack)
            elif(i=='>' and top >= 0):
                stack.pop()
                top-=1
                # print("popped stack",stack
                count+=2
            if(top<-1):
                break
        print(count)
    else:
        print(0)
