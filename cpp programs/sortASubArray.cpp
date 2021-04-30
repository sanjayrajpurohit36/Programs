// Sort an array where a subarray of a sorted array is in reverse order
/*
Uncomment any array and check the output
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int arr[] = {1, 2, 88, 76, 59, 43, 9, 100, 200};
    // int arr[] = {1, 90, 88, 76, 69, 54, 43, 32, 19, 15, 1, 100};
    // int arr[] = {1, 7, 6, 5, 4, 3, 2, 8};
    int count = sizeof(arr) / sizeof(arr[0]);
    int startPos = 0, endPos = 0;
    int i, j;
    for (i = 0; i < count; i++)
    {
        if (arr[i + 1] < arr[i])
        {
            startPos = i;
            break;
        }
    }
    for (i = startPos; i < count; i++)
    {
        if (arr[i + 1] > arr[i])
        {
            endPos = i;
            break;
        }
    }
    if (startPos > 0 && endPos > 0)
        for (i = startPos, j = endPos; i <= (startPos + endPos) / 2 && j >= (startPos + endPos) / 2; i++, j--)
        {
            swap(arr[i], arr[j]);
        }
    for (i = 0; i < count; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}