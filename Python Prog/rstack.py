stack = []
MAX_SIZE = 5
top = -1
 
def pushInStack():
    global top
    if (top == MAX_SIZE-1): #overflow condition
        print("Stack is overflow")
        return
    else: 
        top= top+1
        element = int(input("Enter element for inserting:"))
        stack.append(element) #stack[top] = element

def printStack():
    if top == -1:
        print("Stack is empty")
    else:
        for i in range(top, -1, -1):
            print(stack[i])

def popStack():
    global top
    if(top == -1):
        print("Stack is empty")
    else:
        stack.pop()
        top = top-1



#main
while(True):
    print("Stack Operation")
    print("1. Push")
    print("2. Print")
    print("3. Pop")
    print("0. Exit")
    userChoice = int(input("Enter your Choice: =>"))
    if(userChoice == 1):
        pushInStack()
    elif (userChoice == 2):
        printStack()
    elif (userChoice == 3):
        popStack()
    elif (userChoice == 0):
        break
    else:
        print("Invalid Choice")

