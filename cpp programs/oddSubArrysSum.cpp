#include <iostream>
#include <stdio.h>
#include <vector>
#define SIZE sizeof(arr) / sizeof(*arr)
using namespace std;

int oddSubArraysSub(int arr[], int len)
{
    int ws = 1;
    int sum = 0;
    int pssum = 0;
    vector<int> psa;
    for (int i = 0; i < len; i++)
    {
        pssum += arr[i];
        psa.push_back(pssum);
    }
    while (ws <= len)
    {
        for (int i = 0; i < len; i++)
        {
            if (ws == 1)
                sum += arr[i];
            else
            {
                int sub = 0;
                if (i + ws - 1 < psa.size())
                {
                    if (i - 1 >= 0)
                        sub = psa[i - 1];
                    sum += psa[i + (ws - 1)] - sub;
                }
            }
        }

        ws += 2; // so that the ws becomes odd every time 1,3,5,7,9
    }
    return sum;
}
int main()
{
    int arr[] = {10, 11, 12};
    cout << "odd ary sum: => " << oddSubArraysSub(arr, SIZE);
    return 0;
}
