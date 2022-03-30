#include<iostream>

using namespace std;

class QuickSort { 
    public:
        int partition(int input[], int si, int ei) {
            int count_lesser_nos = 0;
            int pivot_element = input[si]; // taking the first element as Pivot
            
            for (int i = si; i <= ei; i++) {
                if(input[i] < pivot_element) 
                    count_lesser_nos++;
            }
            
            int pi = si + count_lesser_nos; // Correct place for the Pivot Element is si(start Index) + the no of elements lesser than the Pivot

            // swapping the pivot element with the element present on pivot element's right place           
            int temp = input[pi];
            input[pi] = pivot_element;
            input[si] = temp;
            
            
            /* Now we have to ensure that elements before the Pivot Element are smaller and the element after the Pivot elements are greater and return the Pi which is pivot element index */
            
            int idx1 = si, idx2 = ei;
            
            while(idx1 < pi && idx2 > pi) {
                if(input[idx1] >= pivot_element  && input[idx2] < pivot_element)  {
                    int temp = input[idx1];
                    input[idx1] = input[idx2];
                    input[idx2] = temp;
                    // swap(input[idx1], input[idx2]);
                    idx1++;
                    idx2--;
                }
                else if (input[idx1] < pivot_element)
                    idx1++;
                else
                    idx2--;
            }
            // cout << endl;
            // for (int i = si; i <= ei; i++)
            //     cout << input[i] << " ";
            // cout << endl;
            return pi;
        }

        void quickSort(int arr[], int si, int ei) {
            // base case
            // cout << "si  ei" << endl;
            // cout << si << " " << ei;
            if (si >= ei)
                return;
            int pi = partition(arr, si, ei);
            // cout << "returned pi" << pi << "next call" <<  endl;
            quickSort(arr, si, pi - 1);
            quickSort(arr, pi + 1, ei);
        }
};

int main() {
    QuickSort QS;
    int T;
    cin >> T;
    while (T--) {
        int size;
        cin >> size;
        int *arr = new int(size);
        for (int i = 0; i < size; i++)
            cin >> arr[i];
        QS.quickSort(arr, 0, size - 1);
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}