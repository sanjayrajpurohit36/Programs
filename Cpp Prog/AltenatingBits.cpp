// Given a positive integer, check whether it has alternating bits: namely, 
//if two adjacent bits will always have different values.

 

// Example 1:

// Input: n = 5
// Output: true
// Explanation: The binary representation of 5 is: 101
// Example 2:

// Input: n = 7
// Output: false
// Explanation: The binary representation of 7 is: 111.
// Example 3:

// Input: n = 11
// Output: false
// Explanation: The binary representation of 11 is: 1011.
// Example 4:

// Input: n = 10
// Output: true
// Explanation: The binary representation of 10 is: 1010.
// Example 5:

// Input: n = 3
// Output: false
 

// Constraints:

// 1 <= n <= 231 - 1

#include<iostream>
using namespace std;


class Solution {
public:
    bool hasAlternatingBits(int n) {
        
                
                int prebit=n&1;//Extracting the previous bit


        while(n){
            n>>=1;
            int curbit = n&1;//extracting the current bit
            if(prebit==curbit){
                return false;
            }
            prebit=curbit;//assing the current bit to the previous bit
        }
        return true;

         
        
    }
};

int main()
{
    Solution a;
    bool ans = a.hasAlternatingBits(5);//output-1
    cout<<ans;
    
    return 0;
}