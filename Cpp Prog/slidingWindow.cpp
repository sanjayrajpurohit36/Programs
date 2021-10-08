/**
 * Sliding window Algo
 * In this algo we need to take a fixed sized window and the traverse the array to bring out the desired result
 * Its not madatory to take the fixed size of window
 * */

// Problem: Find the max sum of subarry of size 3 O(n)
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

void FindMaxSumSubArray(int arr[10], int n)
{
    int windowSize = 3, maxSum = 0, currentSum = 0, count = 0;
    for (int i = 0; i < windowSize; i++)
        currentSum += arr[i];
    maxSum = currentSum;
    for (int i = windowSize; i < n; i++)
    {
        currentSum += arr[i] - arr[i - windowSize];
        maxSum = max(maxSum, currentSum);
    }
    cout << "sum: =>" << maxSum;
}
int main()
{
    int arr[] = {1, 2, 5, 6, 8, 90, 5};
    FindMaxSumSubArray(arr, sizeof(arr) / sizeof(int));
    return 1;
}