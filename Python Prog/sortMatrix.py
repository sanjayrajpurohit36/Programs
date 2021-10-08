# WAP which sorts a given matrix and return the matrix elements in sorted order.

def getElementsInSortedOrder(matrix):
    #    Write your code here
    ans = []
    for i in range(0, len(matrix)):
        for j in range(0, len(matrix[i])):
            ans.append(matrix[i][j])
    return sorted(ans)


matrix = []
row = []
for i in range(0, 2):
    row = []
    for j in range(0, 2):
        row.append(input())
    matrix.append(row)
print(matrix)
print(getElementsInSortedOrder(matrix))