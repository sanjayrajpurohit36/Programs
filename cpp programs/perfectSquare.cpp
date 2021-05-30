/**
 * Find whether a number is a perfect square or not without using inbuilt functions
 * 
 * Solution: As we know that the entered no N is a perfect square 
 * iff when any number from 1 to N-1 is multiplied by itself is equal to N
 * so we can use binary search from 0 to N-1 to find that particular number.
 * 
 * */
#include <iostream>
using namespace std;
class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        if (num == 1)
            return true;
        int begin = 0;
        int end = num;
        bool flag = false;
        while (begin <= end)
        {
            cout << begin << "   " << end;
            int mid = (begin + end) / 2;
            cout << "mid " << mid << endl;
            if (mid == 0)
                mid = 1;
            if (mid * mid == num)
            {
                flag = true;
                break;
            }
            if (mid * mid > num)
                end = mid - 1;
            if (mid * mid < num)
                begin = mid + 1;
        }

        return flag;
    }
};
int main()
{
    Solution obj;

    int ans = obj.isPerfectSquare(81);
    cout << "ans: " << ans;

    return 0;
}
