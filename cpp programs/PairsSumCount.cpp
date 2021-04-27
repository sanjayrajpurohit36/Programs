#include <iostream>
#include <iterator>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
    int arr[] = {1, 5, 7, 1};
    int K = 6, size = sizeof(arr) / sizeof(*arr);
    map<int, int> valueDifferenceMap;
    map<int, int>::iterator mapIterator;
    int pairCounter = 0;
    // unordered_map<int, int> map;
    // unordered_map<int, int>::iterator mapIterator;
    // for (int i = 0; i < size; i++)
    // {
    //     int diff = K - arr[i];
    //     map[diff] = arr[i];
    // }
    // for (int j = 0; j < size; j++)
    // {
    //     if (map.find(arr[j]) != map.end())
    //         pairCounter++;
    // }

    for (int i = 0; i < size; i++)
    {
        int diff = 0;
        diff = K - arr[i];
        cout << arr[i] << " : =>"
             << "difference " << diff << endl;
        ;
        if (valueDifferenceMap.find(diff)->second)
            valueDifferenceMap.insert(pair<int, int>(diff, arr[i]));
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << valueDifferenceMap.find(arr[i])->second << "->" << valueDifferenceMap.find(arr[i])->second << " ";
        if (K - arr[i] == valueDifferenceMap.find(arr[i])->second)
        {
            pairCounter++;
        }
    }
    cout << "No of pairs whose sum is" << K << " are " << pairCounter << endl;

    return 0;
}