/*
    Write a function which takes the valid roman number string as input &
    converts its integer value.
    Problem Link: https://leetcode.com/problems/roman-to-integer
*/

var romanToInt = function(s) {
    let sum = 0
    let valueMap = {
        I:1,
        V:5,
        X:10,
        L:50,
        C:100,
        D:500,
        M:1000
    }
    for(let i=s.length-1; i>=0; i--) {
        if(valueMap[s[i]] > valueMap[s[i-1]]) {
            sum += valueMap[s[i]] - valueMap[s[i-1]]
            i--;
        } else 
            sum += valueMap[s[i]];
    }
    return sum;
};

console.log(romanToInt("XXX"));  // 30
console.log(romanToInt("MCMXCIV")); // 1994