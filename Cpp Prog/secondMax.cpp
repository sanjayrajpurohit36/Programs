// Print the secondMax element from the array if there is no such element print -1
#include <iostream>
#include <stdio.h>
using namespace std;

int secondMax(int arr[100])
{
    int max = arr[0], smax = -1;
    for (int i = 0; i < 3; i++)
    {
        if (arr[i] > max)
        {
            cout << arr[i] << max << endl;
            int temp = arr[i];
            max = arr[i];
            smax = temp;
        }
        if (arr[i] < max && arr[i] > smax)
        {
            smax = arr[i];
        }
    }
    return smax;
}
int main()
{
    int arr[] = {1, 1, 1};
    int smax = secondMax(arr);
    cout << "smax => " << smax << endl;
    return 0;
}