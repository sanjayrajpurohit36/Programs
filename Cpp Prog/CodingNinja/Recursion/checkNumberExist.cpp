#include<iostream>
using namespace std;

bool checkNumber(int input[], int size, int x) {
    if(input[0] == x) return true;
    else return checkNumber(input + 1, size - 1, x);
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
    
    if(checkNumber(input, n, x)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}