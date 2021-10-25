// Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n),
// ans[i] is the number of 1's in the binary representation of i.

 

// Example 1:

// Input: n = 2
// Output: [0,1,1]
// Explanation:
// 0 --> 0
// 1 --> 1
// 2 --> 10
// Example 2:

// Input: n = 5
// Output: [0,1,1,2,1,2]
// Explanation:
// 0 --> 0
// 1 --> 1
// 2 --> 10
// 3 --> 11
// 4 --> 100
// 5 --> 101
 

// Constraints:

// 0 <= n <= 105

#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i =0;i<=n;i++){
            int temp =i,sum=0;//storing the itterator in temp variable
            while(temp){
                int last = temp&1;//extrating last bit from temp
                sum=sum+last; //adding all the bits
                temp=temp>>1;//deleting the last bit
                
            }
            ans.push_back(sum);//storing the number of bits in respective index
        }
        return ans;
        
    }
};

int main()
{
    Solution a;
    int size;
    cout<<"enter the size of array";
    cin>>size;
vector<int> ans = a.countBits(size);
for(int i=0;i<=size-1;i++){
cout<<ans[i];

}
    return 0;
}