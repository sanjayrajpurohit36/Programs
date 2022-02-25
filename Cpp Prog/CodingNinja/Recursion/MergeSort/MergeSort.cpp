/**
    WAP for merge sort algo.
    and explain the algo
*/
#include<iostream>
using namespace std;

class MergerSort {
    
    public: 
        // function to merge two arrays.
        void merge(int arr[], int si, int ei) {
            int merged[1000];
            int mid = (si + ei) / 2;
            int index1 = si;
            int index2 = mid + 1;
            int k = si; 
            /* 
                In the mergedArray we'll add elements from the starting index of the subarray which is coming to the merge function
                so that once we'll copy back the merged array elements to the original array, it should go to the same index of
                the subarray extracted from the original array.
            */
            while(index1 <= mid && index2 <= ei) {
                if(arr[index1] <= arr[index2]) {
                    merged[k++] = arr[index1++];
                } else 
                    merged[k++] = arr[index2++];
            }

            while(index1 <= mid) {
                merged[k++] = arr[index1++];
            }

            while(index2 <= ei) {
                merged[k++] = arr[index2++];
            }
            
            /* 
                Overwriting the merged elements back in the original array.
            */
            for (int l = si; l <= ei; l++)
                arr[l] = merged[l];
        }
        
        // Merge sort algo
        void mergeSort(int arr[], int si, int ei) {  
            if(si >= ei) return;
            
            int mid = (si + ei) / 2;
            mergeSort(arr, si, mid); // divide
            mergeSort(arr, mid+1, ei); // divide
            merge(arr, si, ei); // conquer
        }
};

int main() {
    MergerSort MS;
    int T, size;
    cin >> T;
    while (T--)
    {
        cin >> size;
        int *arr = new int[size];
        // int len = sizeof(arr)/sizeof(arr[0]);
        for (int i = 0 ; i < size; i++)
            cin >> arr[i];
        MS.mergeSort(arr, 0, size - 1);
        cout << "Result of merge sort" << endl;
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}