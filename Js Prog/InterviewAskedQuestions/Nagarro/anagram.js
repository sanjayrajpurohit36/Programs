/* 
    Write a program to check Check whether two given strings are Anagram or not.
    
    Note: Anagram : Two given strings are said to be  "Anagram" only if there ae equal no of characters
    are present in those two strings and freq. of each char is same in both of the strings.
*/

let freq_map = {};
let counter = 0;
let str1 = "silent",
  str2 = "listen";

const checkAnagram = stringData => {
  splitStr = stringData.split("").sort();
  if (Object.keys(freq_map).length === 0) {
    for (let i = 0; i < splitStr.length; i++) {
      freq_map[splitStr[i]] =
        freq_map[splitStr[i]] === undefined ? 1 : freq_map[splitStr[i]] + 1;
    }
  } else {
    let local_freq_map = {};
    for (let i = 0; i < splitStr.length; i++) {
      local_freq_map[splitStr[i]] =
        local_freq_map[splitStr[i]] === undefined
          ? 1
          : local_freq_map[splitStr[i]] + 1;
    }
    if (JSON.stringify(freq_map) !== JSON.stringify(local_freq_map)) {
      counter = counter + 1;
    }
  }
};
checkAnagram(str1);
checkAnagram(str2);

if (counter == 0) console.log("Yes Anagram");
else console.log("No Anagram");
