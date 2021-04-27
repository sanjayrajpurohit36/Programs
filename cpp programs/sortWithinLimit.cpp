#include <iostream>
#include <stdio.h>
using namespace std;

class Solution
{
public:
    void merge(int arr1[], int arr2[], int n, int m)
    {
        int j = n - 1;
        int k = 0;

        int lastPointer = n - 1;
        for (int i = 0; i < n; i++)
        {
            int searchElement = arr1[i];
            for (int j = 0; j < m; j++)
            {
                if (arr2[j] <= searchElement)
                {
                    int temp = 0;
                    temp = arr1[lastPointer];
                    arr1[lastPointer] = arr2[j];
                    arr2[j] = temp;
                    lastPointer--;
                }
            }
        }

        sort(arr1, arr1 + n);
        sort(arr2, arr2 + m);
    }
} obj;

// Dirver code / Main function
int main()
{
    // int arr[] = {7, 10};
    // int arrb[] = {2, 2, 6, 6, 7, 7, 10, 11, 12, 14, 15, 16};
    int arr[] = {10, 12};
    int arrb[] = {5, 18, 20};
    obj.merge(arr, arrb, 2, 3);
    for (int i = 0; i < 2; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int k = 0; k < 3; k++)
    {
        cout << arrb[k] << " ";
        ;
    }
    return 0;
}