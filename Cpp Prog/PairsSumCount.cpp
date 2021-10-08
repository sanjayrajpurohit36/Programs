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
    for (int i = 0; i < size; i++)
    {
        int diff = 0;
        diff = K - arr[i];
        cout << arr[i] << " : =>"
             << "difference " << diff << endl;
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