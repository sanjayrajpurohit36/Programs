/**
    WAP to print the elements of the array using recursion.
*/

#include<iostream>

using namespace std;

void print(int arr[], int size) {
    if(size == 0) ;
    else  {
        cout << arr[0] << "\n";
        print(arr+1, --size);
    }
}

int main () {
    int arr [5] = {1,2,3,4,5};
    print(arr, 5);
    return 0;
}