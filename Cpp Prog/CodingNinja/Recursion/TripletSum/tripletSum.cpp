/*
    You have been given a random integer array/list(ARR) and a number X. Find and return the triplet(s) in the array/list which sum to X.
    Note: count the repeatitive numbers.
*/

#include <iostream>
#include <algorithm>
using namespace std;

int twoSumFinder(int *arr, int sum, int start, int end) {
    int count = 0;

    while (start < end)
    {
        int tempSum = arr[start] + arr[end];
        if (tempSum == sum) {
            if(arr[start] == arr[end]) {
                int totalElements = end - start + 1;
                count = (totalElements * (totalElements - 1)) / 2;
                return count;
            }
            else
            {
                count++;
                start++;
                end--;
            }
        }
        else if (tempSum < sum)
        {
            start++;
        }
        else
            end--;
    }
    return count;
}

int tripletSumToK(int *input, int length, int sum) {
    int ans = 0;
    if(length < 3)
        return ans;
    sort(input, input + length); // for sorting the array complexity (nlogn)
    
    for (int i = 0; i < length; i++)
    {
        int selectedNum = input[i];
        int newSearchElement = sum - selectedNum;
        int start = i + 1;
        ans += twoSumFinder(input, newSearchElement, start, length-1);
    }
    return ans;
}

int main() {
    int size, k, T;
    cin >> T;
    while(T--) {
        cin >> size;
        int *input = new int[size];
        for (int i = 0; i < size; i++)
            cin >> input[i];
        cin >> k;
        int ans = tripletSumToK(input, size, k);
        cout << ans << endl;
    }
    return 0;
}



