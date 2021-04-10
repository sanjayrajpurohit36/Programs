#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

void seprationAlgo(int arr[], int n)
{
    int pivotElement = 0, i = -1, j = 0;
    for (j = 0; j < n - 1; j++)
    {
        if (arr[j] < 0)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
}

void twoPointerSeprate(int arr[], int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (arr[i] < 0)
            i++;
        else if (arr[j] >= 0)
            j--;
        else
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}

// logic 1 using two pointer approach.
int main()
{
    int arr[10] = {-3, 4, -5, -6, 7, 10, 9, -4, -2, 0};
    int size = sizeof(arr) / sizeof(*arr);
    int i = 0, j = size - 1;
    // twoPointerSeprate(arr, size);
    seprationAlgo(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
