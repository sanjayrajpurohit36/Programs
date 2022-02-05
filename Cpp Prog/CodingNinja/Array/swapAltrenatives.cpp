/* 
    You have been given an array/list(ARR) of size N. You need to swap every pair of alternate elements in the array/list.
    You don't need to print or return anything, just change in the input array itself.
    0 <= N <= 10^5
    N no of elements of the array

*/

void swapAlternate(int *arr, int size)
{
    //Write your code here
    if( size != 0) {
        int i = 0; 
        while(i < size) {
            int pos = i + 1;
            if(pos < size) {
                int temp = arr[i];
                arr[i] = arr[pos];
                arr[pos] = temp;
				i+=2;
            } else
            	i++;   
        }
    }       
}