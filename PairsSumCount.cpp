#include <iostream>
#include <iterator>
#include <map>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 5, 6, 9};
    int K = 8, size = sizeof(arr) / sizeof(*arr);
    map<int, int> valueDifferenceMap;
    map<int, int>::iterator mapIterator;
    int pairCounter = 0;
    for (int i = 0; i < size; i++)
    {
        int diff = 0;
        diff = K - arr[i];
        valueDifferenceMap.insert(pair<int, int>(diff, arr[i]));
    }
    for (int i = 0; i < size; i++)
    {
        // cout << valueDifferenceMap.find(arr[i])->second << " ";
        if (K - arr[i] == valueDifferenceMap.find(arr[i])->second)
        {
            pairCounter++;
        }
    }
    cout << endl;

    for (mapIterator = valueDifferenceMap.begin(); mapIterator != valueDifferenceMap.end(); mapIterator++)
    {
        cout << mapIterator->first << " <-> " << mapIterator->second << endl;
        ;
    }
    cout << pairCounter << endl;

    return 0;
}