                /*  WAP to Create a 2d array with and using dynamic memory allocation from heap */

#include<iostream>

using namespace std;

int main() {
  int m,n;
  cout<< "enter values: \n" ; 
  cin >> m >> n; // taking the size of matrix from user
  int **addressHoldingArray = new int*[m]; // Memory size which is equals to the 2 pointer elements has been created in heap
  for (int i=0; i<m; i++) {
    addressHoldingArray[i] = new int[n]; // For a particular element in addressHoldingArray[i] which can store an address of integer element 
    for(int j=0; j<n; j++) {
      cin >> addressHoldingArray[i][j];
    }
  }

  for(int i = 0; i< m; i++) {
    for (int j=0; j<n; j++) {
       cout << addressHoldingArray[i][j] << "   ";
    } cout << endl;
  }
    // clearing the created dynamic memory
  for (int i = 0; i<n; i++) {
      delete [] addressHoldingArray[i];
  }
  delete [] addressHoldingArray;
  
  return 0;
}