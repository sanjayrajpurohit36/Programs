/* Kadane's algo
    algo :-
    arr input taken
    maxOverAll = maxTillHere = 0
    loop 1 to size of arr:
        maxTillHere += arr[i]
        if(maxOverAll < maxTillHere)
            maxOverAll = maxTillHere
*/
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, -5, 0, 4, 5};
    int maxTillHere = 0;
    int maxOverAll = 0;
    int size = sizeof(arr) / sizeof(*arr);
    for (int i = 0; i < size; i++)
    {
        maxTillHere += arr[i];
        if (maxOverAll < maxTillHere)
        {
            maxOverAll = maxTillHere;
        }
        if (maxTillHere < 0)
            maxTillHere = 0;
    }
    cout << "contigious sub array sum:=>" << maxOverAll << endl;
    return 0;
}