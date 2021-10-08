#include <iostream>
#include <stdio.h>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    bool lemonadeChange(vector<int> &bills)
    {
        unordered_map<int, int> amountInHand;
        amountInHand[5] = 0;
        amountInHand[10] = 0;
        amountInHand[20] = 0;
        bool flag = true;
        for (int i = 0; i < bills.size(); i++)
        {
            if (bills[i] == 5) // if customer gives 5 rs then we don't need to give any change.
            {
                amountInHand[5] += 1;
            }
            else if (bills[i] == 10) // if customer gives rs 10 then we must have 5 Rs note to give him change.
            {
                if (amountInHand[5] > 0)
                {
                    amountInHand[5]--;
                    amountInHand[10]++;
                    cout << "am5 am10 " << amountInHand[5] << " " << amountInHand[10] << endl;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
            else /* customer paid rs 20 so for giving him change we should have either a 
                    1. One 1Rs note and One 5Rs note:  (1* 10 + 1*5 =  15 Rs)
                    2. Three 5 Rs notes to give him Rs 15 back 
                    */
            {
                if (amountInHand[5] > 0 && amountInHand[10] > 0)
                {

                    amountInHand[5]--;
                    amountInHand[10]--;
                    amountInHand[20]++;
                }
                else if (amountInHand[5] >= 3)
                {
                    amountInHand[5] -= 3;
                    amountInHand[20]++;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
        }
        return flag;
    }
};
int main()
{
    int a[] = {5, 5, 10, 20, 5, 5, 5, 5, 5, 5, 5, 5, 5, 10, 5, 5, 20, 5, 20, 5};
    vector<int> arr(a, a + sizeof(a) / sizeof(*a));
    Solution obj;
    bool ans = obj.lemonadeChange(arr);
    cout << ans << endl;
    return 0;
}