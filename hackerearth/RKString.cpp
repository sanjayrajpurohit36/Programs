/**
 *  This program is bookmarked on hackerearth
 *  Link: 
 * 
 * */
#include <iostream>
#include <stdio.h>
#include <string>
#include <unordered_map>

using namespace std;
void subStr(string str, int len, int M, int N)
{
    int windowSize = 1;
    int ans[2] = {0, 0};
    unordered_map<char, int> uMap;
    int i, j;
    while (windowSize <= len)
    {
        uMap['R'] = 0,
        uMap['K'] = 0;
        for (i = 0; i < windowSize; i++)
        {
            uMap[str[i]] = ++uMap[str[i]];
        }
        for (i = windowSize; i <= len; i++)
        {
            if (uMap['R'] == M)
                ans[0] = ans[0] + 1;
            if (uMap['K'] == N)
                ans[1] = ans[1] + 1;
            uMap[str[i - windowSize]] = --uMap[str[i - windowSize]];
            uMap[str[i]] = ++uMap[str[i]];
        }
        windowSize++;
    }
    cout << ans[0] << " " << ans[1] << endl;
}

int main()
{
    int T;
    string str;
    cin >> T;
    while (T--)
    {
        int M, N;
        cin >> M >> N;
        cin >> str;
        subStr(str, str.length(), M, N);
    }
    return 0;
}
