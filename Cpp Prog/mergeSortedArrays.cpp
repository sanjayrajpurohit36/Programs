#include <iostream>
#include <stdio.h>
using namespace std;

class Solution
{
public:
    int i, j;  // defined public class members
    Solution() // default constructor for initiaizing the class member function
    {
        i = 0;
        j = 0;
    }
    void merge(int arrA[], int arrB[], int m, int n) // public class member functions
    {
        while (1)
        {

            if (arrA[i] < arrB[j])
            {
                cout << arrA[i] << " ";
                ++i; //{1, 3, 5, 7};  {0, 2, 6, 8, 9};
                // cout << "value of i" << i << endl;
            }
            else
            {
                cout << arrB[j] << " ";
                ++j;
            }

            if (i == m)
            {
                for (int k = j; k < n; k++)
                    cout << arrB[k] << " ";
                break;
            }
            if (j == n)
            {
                for (int k = i; k < m; k++)
                    cout << arrA[k] << " ";
                break;
            }
        }
    }
} obj;

// Dirver code / Main function
int main()
{
    int arr[] = {1, 3, 5, 7};
    int arrb[] = {0, 2, 6, 8, 9};
    obj.merge(arr, arrb, 4, 5);
    return 0;
}