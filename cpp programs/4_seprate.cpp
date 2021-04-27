#include <iostream>
#include <stdio.h>
using namespace std;

void seprateZeroOneTwos(int arr[], int size)
{
    int pivotElementR = 1, pivotElementL = 2, i = -1, j = 0, m = size - 1, n = size;
    for (j = 0; j < size - 1; j++)
    {
        if (arr[j] < pivotElementR)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
}

int main()
{
    int arr[] = {0, 0, 1, 0, 1, 2, 1, 0, 1};
    int size = sizeof(arr) / sizeof(*arr);
    seprateZeroOneTwos(arr, size);
    for (int i = 0; i < size - 1; i++)
        cout << arr[i] << " ";
    return 0;
}