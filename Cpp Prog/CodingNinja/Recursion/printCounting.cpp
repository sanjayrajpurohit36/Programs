/** 
    WAP to print space seprated numbers from 1 to n in increasing order recursively. 
    Take user from n
*/
#include<iostream>

using namespace std;

void print(int n){
    if(n == 1){
        cout << n << " ";
        return;
    }
    print(n - 1);
    cout << n << " ";
}

int main() {
    int number;
    cout << "Enter number upto which counting has to be printed : \n";
    cin >> number;
    print(number);
    return 0;
}