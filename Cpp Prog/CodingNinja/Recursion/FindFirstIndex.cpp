/**
    Given an array of length N and an integer x, you need to find and return the first index of integer x present in the array. Return -1 if it is not present in the array.
        First index means - First index means, the index of first occurrence of x in the input array.
    Do this recursively. Indexing in the array starts from 0.
*/
#include<iostream>
using namespace std;


int firstIndex(int input[], int size, int x) {
    if(size == -1) return -1;
    if(input[0] == x) {
        return 0;
    } else {
        int pos = firstIndex(input + 1, --size, x );
        // if position which is returned is -1 means element doesn't exists in the array so do not add 1 to that position else add 1 to that position
        return pos == -1 ? pos :  pos + 1;
    }
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
    
    int firstIndexofElement =  firstIndex(input, n, x);
    cout << " \n "<< firstIndexofElement;
    return 0;
}