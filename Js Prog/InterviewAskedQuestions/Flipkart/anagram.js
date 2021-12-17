/* 
    Write an efficient function isAnagram() which makes minimum no of looping 
    & tells whether the passed strings are anagram or not. 
    LeetCode Problem Link : https://leetcode.com/problems/valid-anagram/
*/

function isAnagram(str1, str2) {
    if(str1.length != str2.length) { // Basic condition check if the strings are of unequal length then they can't be anagram
      return false;
    }
    
    let mapStr = {};
    for(let i = 0; i<str1.length; i++) {
      if(mapStr[str1[i]]) {
        mapStr[str1[i]] += 1
      } else mapStr[str1[i]] = 1;
      if(mapStr[str2[i]]) {
        mapStr[str2[i]] -= 1;
      } else mapStr[str2[i]] = -1;
    }
    // console.log("MapStr =>", mapStr);
    for(var [k, v = mapStr[k]] in mapStr) {
      if(v > 0) return false;
    }
    return true;
  }
  
  let testCases = [["a", "ab"], ["teacher", "cheater"]]
  for( let cases of testCases) { // value of cases will be the subarrays
      console.log(isAnagram(cases[0], cases[1]));
  }