/*
    Program to find whether there is a sub array whose sum is 0;
*/
#include<bits/stdc++.h>
#include<unordered_map>

bool subArrayExists(int arr[], int n) {
    unordered_map<int, int> uMap;
    int sum = 0, flag = 0;
    for(int i=0; i<n; i++) 
    {
        sum += arr[i];
        if(sum == 0 || arr[i] == 0 || uMap[sum]) {
            flag =1;
            break;
        } else uMap[sum] = 1;
    }
    if(flag == 1)  return true;
    return false;
}

int main() {
    int arr []= {-10 ,-1 ,46 ,-27 ,-32 ,-5 ,-4 ,1 ,-29 ,5 ,29 ,38 ,14 ,-22 ,-9, 0};
    int n =  sizeof(arr) / sizeof(arr[0]);
    bool ans = subArrayExists(arr, n);
    if(ans) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}