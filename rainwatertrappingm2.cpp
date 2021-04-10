/*Water trapping problem
Time: O(n)
Space: O(1)
*/
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

int maxWater(int arr[], int len)
{
    int lo = 0, high = len - 1, lEleMax = arr[0], rEleMax = arr[len - 1], diff = 0, waterStored = 0;
    diff = 0;
    while (lo <= high)
    {
        if (arr[lo] < arr[high])
        {
            if (arr[lo] > lEleMax)
            {
                lEleMax = arr[lo]
            }
            else
                waterStored += lEleMax - arr[lo];
            lo++;
        }
        else
        {
            if (arr[high] > rEleMax)
            {
                rEleMax = a[high];
            }
            else
                waterStored += rEleMax - arr[high];
            high--;
        }
    }
    return waterStored;
}

int main()
{
    int T, n;
    cin >> T >> n;
    while (T--)
    {
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << maxWater(arr, n) << endl;
    }
    return 0;
}