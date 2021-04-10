#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    // arr.pop_back();
    arr.resize(10); // vector is initialized by 0
    cout
        << "Size of vector"
        << ":" << arr.size() << endl;
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    arr.erase(arr.begin());
    cout << "after erase" << endl;
    for (int i = 0; i < arr.size(); i++)
        cout
            << arr[i] << " ";
    // arr.clear();
    // cout << "\nsize of vector after clear" << arr.size();
    // cout << "\ncheck is vector is empty" << arr.empty();
    return 0;
}
