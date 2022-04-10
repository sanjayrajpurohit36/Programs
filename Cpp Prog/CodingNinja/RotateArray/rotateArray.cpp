/*
    Problem : You have been given a random integer array/list(ARR) of size N. Write a function that rotates the given array/list by D elements(towards the left).
    Cnstraints: 1 <= t <= 10^4
                0 <= N <= 10^6
                0 <= D <= N
                Time Limit: 1 sec
    Test Cases: 
    1
    7
    1 2 3 4 5 6 7
    2
    Output: 3 4 5 6 7 1 2
*/

#include <iostream>
using namespace std;

void reverse(int *arr, int start, int end) {
    while(start<end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotate(int *arr, int n, int size)
{
    reverse(arr, 0, n - 1);
    reverse(arr, n, size - 1);
    reverse(arr, 0, size - 1);
}

int main()
{
    int size, T, rotations;
    cin>>T;
    while (T--)
    {
        cin >> size;
        int *arr = new int[size];
        for (int i = 0; i < size; i++)
            cin >> arr[i];
        cin >> rotations;
        rotate(arr, rotations, size);
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        delete[] arr;
    }
    return 0;
}