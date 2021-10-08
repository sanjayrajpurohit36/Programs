#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int T, N;
    cin >> T;
    while (T--)
    {
        cin >> N;
        string scoreValue;
        cin >> scoreValue; // str inserted
        int inputPointer = 0;
        int shootChances = N;
        int teamAScore = 0, teamBScore = 0;
        int result = 2 * N;
        while (shootChances--)
        {
            teamAScore += scoreValue[inputPointer++] == '1' ? 1 : 0;
            teamBScore += scoreValue[inputPointer++] == '1' ? 1 : 0;
            int diff = 0;
            diff = abs(teamAScore - teamBScore);
            if (shootChances < diff)
            {
                result = (N - shootChances) * 2;
                break;
            }
        }
        cout << result << "\n";
    }
    return 0;
}
