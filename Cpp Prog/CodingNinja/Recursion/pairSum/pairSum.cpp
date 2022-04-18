/*
    You have been given an integer array/list(ARR) and a number 'num'. 
    Find and return the total number of pairs in the array/list which sum to 'num'.
    Constraints:
        1 <= t <= 10^2
        0 <= N <= 10^4
        0 <= num <= 10^9

        Time Limit: 1 sec
    Example: 
            1
            9
            1 3 6 2 5 4 3 2 4
            7
        Time Complexity : O (n log(n))
        Space Complexity: O(1)
*/

#include <iostream>
#include <algorithm>
using namespace std;

int checkPair(int *arr, int size, int k)
{
    int l = 0, r = size - 1;
    sort(arr, arr + size);
    int ans = 0;
    int countr = 1, countl = 1;
    while (l < r)
    {
        int temp = arr[l] + arr[r];
            if (temp > k)
                r--;
            else if(temp < k)
                l++;
            else {
                if(arr[l] == arr[r]) {
                    int totalElements = r - l + 1;
                    ans += (totalElements * (totalElements - 1)) / 2;
                    return ans;
                }
                else {
                    int tempLeftIndex = l+1;
                    int tempRightIndex = r-1;
                    while( tempLeftIndex <= tempRightIndex && arr[tempLeftIndex] == arr[l]) {
                        tempLeftIndex++;
                    }

                    while( tempRightIndex >= tempLeftIndex && arr[tempRightIndex] == arr[r]) {
                        tempRightIndex--;
                    }

                    int noOfElementsLeftSide =  tempLeftIndex - l;
                    int noOfElementsRightSide = r - tempRightIndex;
                    ans += noOfElementsLeftSide * noOfElementsRightSide;
                    l = tempLeftIndex;
                    r = tempRightIndex;
                }
            }
    }
    return ans;
}

int main()
{
    int T; // Test Cases
    cin >> T;
    while (T--)
    {
        int size;
        cin >> size;
        int *arr = new int[size];
        int sum;
        for (int i = 0; i < size; i++)
            cin >> arr[i];
        cin >> sum;
        cout << checkPair(arr, size, sum) << endl;
    }
    return 0;
}