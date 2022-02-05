/**
*    Find the sum of the given array using recursion
*/

#include<iostream>
#include<stdio.h>
using namespace std;

int sum(int arr[], int size) {
    if(n == -1) {
        return 0;
    } else {
        // by sending the arr + 1 we are sending the remaning array to the same function along with reduced array size
        int remaningArraySum = sum(arr + 1, --size); 
        /* 
            This line means send the remaning array to the function for calculating the sum of the remaning array except the first element
            and once the sum of the remaning array is calculated the do the below step.
        */
        int sum = remaningArraySum + arr[0]; 
        /*
            The sum of the total array is the sum of the first element and the remaning array
        */
        return sum;
    }
}

int main() {
    int arr[5] = {};
    for (int i = 0; i<5; i++) 
        cin >> arr[i];
    int ans = sum (arr, 5);
    cout << endl << "sum of array is : "<< ans;
    return 0;
}