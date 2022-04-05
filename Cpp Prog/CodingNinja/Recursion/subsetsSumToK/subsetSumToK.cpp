/* Print subsets Sum to K */

#include <iostream>
using namespace std;

void subsetSumToK(int input[], int length, int k, int *output, int osize , int pickIndex = 0) { 
    if (pickIndex == length)
    {
        if(k == 0) {
            for (int i = 0; i < osize; i++)
            {
                cout << output[i] << " ";
            }
            cout << endl; 
        }
        return;
}   
    int nosize = osize;

    int *newArrPointer = new int[100000];
    for (int i = 0; i < osize; i++)
        newArrPointer[i] = output[i]; // copying the output array in newArray

    newArrPointer[osize] = input[pickIndex]; // adding the latest elenent
    nosize = osize + 1;

    int newSearchElement = k - input[pickIndex];
    subsetSumToK(input, length, newSearchElement, newArrPointer, nosize, ++pickIndex);
    subsetSumToK(input, length, k, output, osize, pickIndex);
}

int main() {
    int size, k;
    cin >> size;
    int *input = new int[size];
    int *output = new int[10000];

    for (int i = 0; i < size; i++)
        cin >> input[i];
    cin >> k;
    subsetSumToK(input, size, k, output, 0, 0);
    return 0;
}



