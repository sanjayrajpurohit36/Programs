//PROBLEM:
// We have two special characters:

// The first character can be represented by one bit 0.
// The second character can be represented by two bits (10 or 11).
// Given a binary array bits that ends with 0, return true if the last character must be a one-bit character.

 

// Example 1:

// Input: bits = [1,0,0]
// Output: true
// Explanation: The only way to decode it is two-bit character and one-bit character.
// So the last character is one-bit character.
// Example 2:

// Input: bits = [1,1,1,0]
// Output: false
// Explanation: The only way to decode it is two-bit character and two-bit character.
// So the last character is not one-bit character.
 

// Constraints:

// 1 <= bits.length <= 1000
// bits[i] is either 0 or 1.




#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int len = bits.size();//extracting the size of vector
        int i = bits.size();
        while(i>2){//checking all bits till the last  bit
            if(bits[len-i]==1){ // if it is one then skip the next bit
                i-=2;
            }
            else{// else it is 0 so move only one bit
                i--;
            }
            
        }

        //after completion of the traversal we check whether the last bit is 0 or 1 
        // if it's zero then array ends with special bit charater or it doesn't
       
            if(bits[len-i]==0){
                return true;
            }
            else{
                return false;
            }
        
    }
};


int main()
{
    Solution a;
    vector<int> arr{1,1,0};
    bool flag = a.isOneBitCharacter(arr);
    cout<<flag;
}