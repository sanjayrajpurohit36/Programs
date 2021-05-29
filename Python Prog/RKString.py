# # input "RKRRK"
# # tech: sliding window
# # ansList [0,0]
# # M = 2 (R)
# # N = 1 (K)
# # continous loop till end =  len(input)
# # obj = {
# #     R: 0,
# #     K: 0
# # }
# # start = 0
# # end = 1
# # loop x in range(end):
# #     obj[x] = obj[x] + 1


# def freqObj(str):
#     strObj = {"R": 0, "K": 0}
#     for i in str:
#         strObj[i] = strObj[i] + 1
#     return strObj


# def subStr(str):
#     M = 2  # R
#     N = 1  # K
#     end = 1
#     ansList = [0, 0]
#     # print(str[start:end])
#     while end <= len(str):
#         for i in range(len(str)):
#             if len(str[i : i + end]) == end:
#                 print(str[i : i + end])
#                 freqAns = freqObj(str[i : i + end])
#                 print(freqAns)
#                 if freqAns["R"] == M:
#                     ansList[0] = ansList[0] + 1
#                 if freqAns["K"] == N:
#                     ansList[1] = ansList[1] + 1
#         print("\n")
#         end = end + 1

#     print(ansList)


# # subStr("RKRRK")
# # subStr("RKRK")
# RKStr = input()
# subStr("KRKRK")


"""
# Sample code to perform I/O:

name = input()                  # Reading input from STDIN
print('Hi, %s.' % name)         # Writing output to STDOUT

# Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
"""

# Write your code here
T = int(input())
while T:

    def freqObj(str):
        strObj = {"R": 0, "K": 0}
        for i in str:
            strObj[i] = strObj[i] + 1
        return strObj

    def subStr(str, M, N):
        # M = 2  # R
        # N = 1  # K
        end = 1
        ansList = [0, 0]
        lStr = len(str)
        if M > lStr and N > lStr:
            return ansList
        while end <= lStr:
            for i in range(lStr):
                if len(str[i : i + end]) == end:
                    print(str[i : i + end])
                    freqAns = freqObj(str[i : i + end])
                    print(freqAns)
                    if freqAns["R"] == M:
                        ansList[0] = ansList[0] + 1
                    if freqAns["K"] == N:
                        ansList[1] = ansList[1] + 1
            # print("\n")
            end = end + 1
        return ansList

    T = T - 1
    l = input()
    print(" =>", l)
    # M = ""
    # N = ""
    # flag = False
    # for i in l:
    #     if flag:
    #         N += i
    #     if i != " ":
    #         M += i
    #     else:
    #         flag = True
    # print(M, N, end="\n")
    # RKStr = input()
    # ansList = subStr("KKKRRKKKRKKRKKK", 9882051, 1)
    # for i in ansList:
    #     print(i, end=" ")
