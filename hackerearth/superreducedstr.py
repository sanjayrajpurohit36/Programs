#We will solve this using recurssion:-
def reduceStr(str):
    stack = []
    top,isReduced = -1, 0
    for i in str:
        print('stack at start of loop', stack)
        stack.append(i)
        top += 1
        if(top > 0):
            if(stack[top] == stack[top-1]):
                stack.pop(top)
                stack.pop(top-1)
                top -= 2
                isReduced = 1
    print("reduced stack->", stack)
    if(isReduced):
        return reduceStr(stack)
    else: 
        return (stack,top)

t=int(input())
while(t):
    t-=1
    string = input()
    ans = reduceStr(string)
    top = ans[1]
    finalReducedList = ans[0]
    print(top, finalReducedList)
    if(top == -1): 
        print("Empty String")
    else:
        ansStr = ""
        for i in range(top+1):
            ansStr = ansStr + finalReducedList[i]
        print(ansStr)
        