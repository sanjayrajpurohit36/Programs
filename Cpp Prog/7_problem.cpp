#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 9, 10, 11};
    int i = 0;
    int size = sizeof(arr) / sizeof(*arr);
    int temp = arr[size - 1];
    for (i = size - 1; i > 0; i--)
    {
        swap(arr[i - 1], arr[i]);
    }
    arr[0] = temp;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}