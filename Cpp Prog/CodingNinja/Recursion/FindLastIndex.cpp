/**
    Given an array of length N and an integer x, you need to find and return the last index of integer x present in the array. Return -1 if it is not present in the array.
        Last index means - if x is present multiple times in the array, return the index at which x comes last in the array.
    You should start traversing your array from 0, not from (N - 1).
    Do this recursively. Indexing in the array starts from 0.
*/
#include<iostream>
using namespace std;

// Traversing the array from last element size-1
int lastIndex(int input[], int size, int x) {
    
    if(size == 0) return -1;
    if(input[size - 1] == x) {
        return size - 1;
    } else {
    int li = lastIndex(input, size - 1, x);
        return li;
    }
}
// Traversing the array from first element i.e 0
int lastIndexTraverseStart(int input[], int size, int x) {
    if(size == 0) return -1;

    int li =  lastIndexTraverseStart(input + 1, --size, x);

    if(li != -1) return li + 1;

    if(input[0] == x) return 0;
    else return -1;
}

int main(){
    int n;
    cout << "Enter the size of the array: \n";
    cin >> n;
  
    int *input = new int[n];
    cout << "Enter the the array: \n";
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    cout << "Enter the number to check it's existance in the array: \n";
    cin >> x;
    
    int lastIndexOfElement =  lastIndexTraverseStart(input, n, x);
    cout << lastIndexOfElement;
    return 0;
}