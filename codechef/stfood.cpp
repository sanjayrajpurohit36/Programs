#include <iostream>
#include <algorithm>
using namespace std;
#define InputMatrix cin >> matrix[i][j];
#define loop for (int i = 0; i < N; i++)
int main()
{
    int T, N;
    int Si, Pi, Vi;
    cin >> T >> N;
    int matrix[N][3];
    int chefProfit[N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            InputMatrix
        }
    }
    loop
    {
        int totalProfit = matrix[i][1] * matrix[i][2];
        chefProfit[i] = totalProfit / (matrix[i][0] + 1);
    }
    cout << *max_element(chefProfit, chefProfit + N);
    return 0;
}
