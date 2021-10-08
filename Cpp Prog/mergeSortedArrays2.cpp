// One array is sorted in ascending order and another in descending make one array out of it which is sorted in ascending order

#include <iostream>
#include <stdio.h>
using namespace std;
void mergeArrays(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j = m - 1, k = 0, l = 0;
    int ansArray[m + n];
    while (1)
    {
        if (arr1[i] < arr2[j])
        {
            ansArray[k] = arr1[i++];
            // cout << ansArray[k] << " ";
            k++;
        }
        else
        {
            ansArray[k] = arr2[j--];
            // cout << ansArray[k] << " ";
            k++;
        }
        if (i == n) // this means the first array is complete and the pointer i has reached to the last element of the array
        {
            for (l = j; l > 0; l--)
                ansArray[k++] = arr2[l];
            break;
        }
        if (j == 0) // means the second array is complete and the pointer j has reached at the begining of the second array
        {
            for (l = i; l < n; l++)
                ansArray[k++] = arr1[l];
            break;
        }
    }
    cout << "Resultant Array" << endl;
    for (int i = 0; i < m + n - 2; i++)
        cout << ansArray[i] << " ";
}
int main()
{
    int arr1[] = {1, 2, 5, 6, 8, 9};
    int arr2[] = {90, 89, 78, 67, 56, 41, 38, 35};
    mergeArrays(arr1, arr2, 6, 8);
    return 0;
}