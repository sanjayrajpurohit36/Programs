/* Implement Binary Search recursively */

#include<iostream>
using namespace std;

int rbinarySearch(int input[], int start, int end, int element) {
	int mid = (start + end) / 2;
    cout << mid;
    if(input[mid] == element) {} //return mid;
    if(input[mid] < element)
    	return rbinarySearch(input, mid + 1, end, element);
    else 
        return rbinarySearch(input, start, mid - 1, element);
}

int binarySearch() {
    // Write your code here
    int input[] = {1, 2, 3, 4, 5}, size = 5, element = 5;
    return rbinarySearch(input, 0, size, element);
}

int main () {
    int ans = binarySearch();
    cout << ans;
    return 0;
}