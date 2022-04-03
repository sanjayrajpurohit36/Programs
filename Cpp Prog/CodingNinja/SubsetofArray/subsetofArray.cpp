/* Return all the subsets of an array in a 2D array */

#include<iostream>
using namespace std;

int subset(int *input, int n, int output[][20]) {
    // Write your code here
    if (n == 0)
    {
        output[0][0] = 0;
        return 1;
    }

    int size = subset(input + 1, n - 1, output); // it will return output for n == -1 which will be an empty array /* [ [] ]    

    for (int i = 0; i < size; i++)
    {
        int noOfColumns = output[i][0] + 1;
        output[i + size][0] = noOfColumns;
        output[i + size][1] = input[0];
        for(int j = 1; j < noOfColumns + 1; j++) { // noOfColumns + 1 becauese noOfColumns has to be filled with numbers so that's why we have to loop till + 1
            output[i + size][j + 1] = output[i][j];
        }
    }
    return (size * 2);
}

int main() {
    int size;
    cin >> size;
    int *arr = new int[size]; // declared dynamic sized array

    for (int i = 0; i < size; i++)
        cin >> arr[i];
    int output[20][20] = {};
    int ansSize  = subset(arr, size, output);
    for( int i = 0; i < ansSize; i++) { 
        for( int j = 1; j <= output[i][0]; j++) {  //
            cout << output[i][j] << " ";
        }
    cout << endl;
  }
    return 0; 
}