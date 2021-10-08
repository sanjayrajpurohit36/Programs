#include <iostream>
#include <stdio.h>
#include <math.h>
#include <vector>
using namespace std;

int maxProfitMultiTrans(int prices[20], int n)
{
    int MAX = prices[1], MIN = prices[0], i, j, profit = 0;
    for (i = 2; i < n; i++)
    {
        if (prices[i] < MAX)
        {
            profit += MAX - MIN;
            // cout << "buy: " << MIN << " sell: " << MAX << " profit :" << profit << endl;
            MIN = prices[i];
            MAX = INT_MIN;
        }
        else
        {
            MAX = prices[i];
            // cout << MAX;
        }
        // if (prices[i] < MIN)
        // {
        //     MIN = prices[i];
        //     MAX = INT_MIN;
        // }
        // if (prices[i] > MAX)
        // {
        //     MAX = prices[i];
        // }
        // if (prices[i] < MAX || i == n - 1)
        // {
        //     profit += (MAX - MIN);
        //     cout << "buy: " << MIN << " sell: " << MAX << " profit :" << profit << endl;
        //     MIN = prices[i];
        //     MAX = INT_MIN;
        // }
    }
    // cout << "min => " << MIN << " "
    //      << "max=>" << MAX << "profit => " << profit << endl;
    return profit == 0 ? MAX - MIN : profit;
}
// int maxProfit(int arr[20], int n)
// {
//     int MAX = INT_MIN, MIN = INT_MAX, i, j, profit = 0;
//     for (i = 0; i < n; i++)
//     {
//         if (arr[i] < MIN)
//         {
//             MIN = arr[i];
//             MAX = INT_MIN;
//         }
//         if (arr[i] > MAX)
//         {
//             MAX = arr[i];
//         }

//         profit = max(profit, (MAX - MIN));
//         cout << MIN << " " << MAX << " " << profit << endl;
//     }
//     return profit;
// }

int main()
{
    // int arr[7] = {1, 2, 4, 5, 7, 6, 4};
    // int arr[7] = {2, 4, 6, 8, 1, 10, 0};
    int arr[6] = {7, 1, 5, 3, 6, 4};
    // int arr[6] = {2, 4, 1};
    // int arr[5] = {1, 1, 1};
    // int arr[6] = {7, 7, 7, 5, 7, 6};
    // int arr[] = {1, 2, 3, 4, 5};

    // vector<int> arr;
    // arr.push_back(1);
    // arr.push_back(2);
    int n = sizeof(arr) / sizeof(int);
    cout << "" << maxProfitMultiTrans(arr, n) << endl;
    return 0;
}