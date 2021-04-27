/*
    This approach will make every subarray and will calculate its sum.
    if the sum is > INT_MIN then will set ans = sum;
    but this approach will take O(n^3) time complexity so its not optimal

    Good Solution: Kadane's Algo
 */
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, -2, 5};
    int i = 0, sum1 = 0, sum2 = 0, ans = INT_MIN;
    int size = sizeof(arr) / sizeof(*arr);
    for (i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            int s = 0;
            for (int k = 0; k < j; k++)
            {
                s += arr[k];
            }
            if (ans < s)
                ans = s;
        }
    }

    cout << ans;
    return 0;
}