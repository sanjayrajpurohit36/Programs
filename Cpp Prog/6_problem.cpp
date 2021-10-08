#include <iostream>
#include <iterator>
#include <map>
#include <vector>

using namespace std;

int main()
{
    map<int, bool> keyValueMap;
    int arr1[] = {85,
                  25,
                  1,
                  32,
                  54,
                  6};     // {1, 2, 3, 4, 5};
    int arr2[] = {85, 2}; // {1, 2, 3, 6};
    vector<int>
        unionArray;
    map<int, bool>::iterator itr;

    for (int i = 0; i < 6; i++)
    {
        if (!keyValueMap.empty())
        {
            if (!keyValueMap[arr1[i]])
            {
                itr = keyValueMap.find(arr1[i]);
                itr->second = true;
                unionArray.push_back(arr1[i]);
            }
        }
        else
        {
            keyValueMap.insert(pair<int, int>(arr1[i], true));
            unionArray.push_back(arr1[i]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        if (!keyValueMap.empty())
        {
            if (!keyValueMap[arr2[i]])
            {
                itr = keyValueMap.find(arr1[i]);
                itr->second = true;
                unionArray.push_back(arr2[i]);
            }
        }
        else
        {
            keyValueMap.insert(pair<int, int>(arr2[i], true));
            unionArray.push_back(arr2[i]);
        }
    }

    for (int i = 0; i < unionArray.size(); i++)
        cout << unionArray[i] << "    ";

    return 0;
}