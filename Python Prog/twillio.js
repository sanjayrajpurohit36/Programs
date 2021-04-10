function palindrome(s) {
  let subStrings = {};

  for (let i = 0; i < s.length; i++) {
    for (let j = 0; j < s.length - i; j++) {
      let counter = i + 2;
      let subString = s.substring(j, j + i + counter);
      console.log("subStrings =>", subString);
      if (
        subString === subString.split("").reverse().join("") &&
        !subStrings[subString]
      ) {
        subStrings[subString] = true;
      }
    }
  }
  return Object.keys(subStrings).length;
}

console.log("result", palindrome("aaa"));
