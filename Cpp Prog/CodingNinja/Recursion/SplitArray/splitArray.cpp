/*
    Given an integer array A of size N, check if the input array can be splitted in two parts such that -

    - Sum of both parts is equal
    - All elements in the input, which are divisible by 5 should be in same group.
    - All elements in the input, which are divisible by 3 (but not divisible by 5) should be in other group.
    - Elements which are neither divisible by 5 nor by 3, can be put in any group.

    Example: 
            Input:
                    2
                    1 2
            Output: false

            Input: 
                    3
                    1 4 3
            Ouptut: true
*/

#include<iostream>
using namespace std;

bool splitCheck(int *arr, int m3, int m5, int size) {
    if(size == 0) {
        if(m3 == m5)
            return true;
        else
            return false;
    }
    int nm3 = m3 + arr[0];
    
    bool ans1 = splitCheck(arr + 1, nm3, m5, --size);
    int nm5 = m5 + arr[0];
    bool ans2 = splitCheck(arr + 1, m3, nm5, size);
    return ans1 || ans2;
}

bool splitArray(int input[], int size) {
    int m3 = 0;
    int m5 = 0;
    int *arr = new int[size];
    int k = 0;
    for (int i = 0; i < size; i++)
    {
        if(input[i] %3 != 0 && input[i] % 5!=0) {
            arr[k] = input[i];
            k++;
        }
        if(input[i] % 3 == 0 && input[i] %5 != 0) {
            m3 += input[i];
        } 
        if(input[i] % 5 ==0) {
            m5 += input[i];
        }
    }

    return splitCheck(arr, m3, m5, k);
}

int main() {
    int T; // Test Cases
    cin >> T;
    while(T--) {
        int size;
        cin >> size;
        int *arr = new int[size];
        for (int i = 0; i < size; i++)
            cin >> arr[i];
        cout << splitArray(arr, size) << endl;
    }
    return 0;
}