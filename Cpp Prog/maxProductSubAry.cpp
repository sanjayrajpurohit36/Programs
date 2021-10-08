/**
 * Medium level
 * Problem: Find the max product sub array from the given array
 * 
 * */
#include <iostream>
#include <stdio.h>
#include <vector>
#include <stdbool.h>
using namespace std;
#define ll long long int

void maxProduct(int a[100], int size)
{
    ll maxProduct = 0, P = 1, N = 1;
    for (int i = 0; i < size; i++)
    {
        if (a[i] > 0)
            P = P * a[i];
        else
            P = 1;
        if (a[i] != 0)
            N = N * a[i];
        if (P >= N && P >= maxProduct)
            maxProduct = P;
        if (N >= P && N >= maxProduct)
            maxProduct = N;
        if (a[i] == 0)
        {
            P = 1;
            N = 1;
        }
    }
    cout << maxProduct << endl;
}
int main()
{
    // int a[] = {6, -3, -10, 0, 2};
    // int a[] = {5, 6, -1, -2, -3, 4, 0};
    // int a[] = {-1, -1, -1, -1};
    int a[] = {2, 3, 4, 5, -1, 0};
    maxProduct(a, sizeof(a) / sizeof(int));
    return 0;
}


maxproduct -180

[9,0,8,-1,-2, -2,6,0] = 24

at any point - if current is negative then if untilNow is negative then useful

at any point - if current is positive and untilNow is running negative store as maxNegative


current element = positive 
									negative
product = positive 
					negative


p,p - max product

p,n - negative max -

n,p - negative max -
			positive max - max product

n,n - positive max 

end me negative

now i have to remove negatives from start 