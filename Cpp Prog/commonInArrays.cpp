/**
 *  WAP to find the common elements in 3 arrays
 * */

#include <iostream>
#include <stdio.h>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    bool bSearch(int arr[], int size, int searchElement)
    {
        int start = 0;
        int end = size - 1;
        while (start <= end)
        {
            int mid = (start + end) / 2;
            // cout << " mid " << mid << " arr[mid] " << arr[mid] << " se " << searchElement;
            if (arr[mid] == searchElement)
                return true;
            if (arr[mid] < searchElement)
                start = mid + 1;
            else // arr[mid] > se
                end = mid - 1;
        }
        return false;
    }
    vector<int> getCommonElements(int a[], int b[], int c[], int aSize, int bSize, int cSize)
    {
        vector<int> ans;
        unordered_map<int, int> umap;
        for (int i = 0; i < aSize; i++)
        {
            // cout << " bSearch " << bSearch(b, bSize, a[i]) << endl;
            if (bSearch(b, bSize, a[i]) && bSearch(c, cSize, a[i]))
            {
                cout << umap[a[i]];

                if (umap[a[i]] == 0)
                {
                    ans.push_back(a[i]);
                    umap[a[i]] = 1;
                }
            }
        }
        return ans;
    }
} ob;

int main()
{
    int a[] = {1, 1, 1};
    int b[] = {1, 1, 1};
    int c[] = {1, 1, 1};
    int aSize = sizeof(a) / sizeof(int);
    int bSize = sizeof(b) / sizeof(int);
    int cSize = sizeof(c) / sizeof(int);
    vector<int> ans;
    ans = ob.getCommonElements(a, b, c, aSize, bSize, cSize);
    cout << "Common elments: =>";
    if (ans.size() == 0)
        cout << -1;
    else
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }

    return 0;
}