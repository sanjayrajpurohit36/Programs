#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};
    int *ptr = arr;
    cout << sizeof(arr) << endl; // 10
    cout << sizeof(ptr); // 8
    return 0;
}