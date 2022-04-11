#include <iostream>
using namespace std;

class Solution
{
public:
    bool validMountainArray(int arr[], int size)
    {
        int counter = 0;
        bool flag = false;
        for (int i = 0; i < size; i++)
        {
            if(arr[i] < arr[i+1]) {
                counter++;
            } else if(arr[i] == arr[i+1]) {
                return false;
            } else {
                flag = true;
            }
            
            if(flag) {
                if(arr[i+1] >= arr[i])  {
                    return false;
                }
            }
        }
        return (counter > 0 && flag);
    }
};

int main()
{
    int size, T;
    Solution S;
    cin >> T;
    while (T--)
    {
        cin >> size;
        int *arr = new int[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        cout << S.validMountainArray(arr, size) << endl;
    }
    return 0;
}