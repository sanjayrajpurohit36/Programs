/*
Time: O(n)
Space: O(n)
*/
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;

int maxWater(int arr[], int len)
{
    int lmax[len], rmax[len], lEleMax = -1, rEleMax = -1, diff = 0, waterStored = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] > lEleMax)
        {
            lEleMax = arr[i];
        }
        lmax[i] = lEleMax;
    }
    for (int i = len - 1; i >= 0; i--)
    {
        if (arr[i] > rEleMax)
        {
            rEleMax = arr[i];
        }
        rmax[i] = rEleMax;
    }
    diff = 0;
    for (int i = 0; i < len - 1; i++)
    {
        diff = min(lmax[i], rmax[i]) - arr[i];
        waterStored += diff;
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