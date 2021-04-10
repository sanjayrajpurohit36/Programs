#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main()
{
    int arr[7] = {
        0,
        0,
        0,
        1,
        0,
        0,
        0,
    };
    int size = sizeof(arr) / sizeof(*arr);
    int i = 0, j = size - 1;
    int pivotElement = 0;
    while (i < j)
    {
        if (arr[i] == 0)
            i++;
        else if (arr[j] == 1)
            j--;
        else
        {
            // swap(arr[i], arr[j]);
            arr[i] = 0;
            arr[j] = 1;
            i++;
            j--;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
