/* Print all the subset of an array */

#include<iostream>
using namespace std;

#define loop(i,n) for(int i = 0; i < n; i++)
#define console(i) cout << i;

void print_arr_subset(int *input, int n, int osize, int output[])
{
    // Write your code here
    if (n <= 0)
    {
        loop(i, osize) {
            cout << output[i] << " ";
        }
        cout << endl;
        return;
    }

    
    print_arr_subset(input + 1, --n, osize, output);
    output[osize] = input[0];
    osize++;
    print_arr_subset(input + 1, n, osize, output); // no need to send --n again here as it will reduce the size osize one more time
}

int main() {
    int size;
    cin >> size;
    int *arr = new int[size]; // declared dynamic sized array

    for (int i = 0; i < size; i++)
        cin >> arr[i];
    int output[20] = {};
    print_arr_subset(arr, size, 0, output);
    return 0; 
}