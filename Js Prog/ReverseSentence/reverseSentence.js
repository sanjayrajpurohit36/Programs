/* 
    WAP to reverse a given sentence as per the example given below.

    Input: I love Javascript
    Ourput: Javascript love I
*/

function reverseHelper(strArr, start, end) {
  while (start < end) {
    let temp = strArr[start];
    strArr[start] = strArr[end];
    strArr[end] = temp;
    start++;
    end--;
  }
  return strArr;
}

function reverseSentence(input) {
    let strArray = input.split("");
    let start = 0;
    let end = input.length;
    let ans = reverseHelper(strArray, 0, input.length);
    let i;
    for (i = 0; i < strArray.length; i++) {
      if (strArray[i] === " ") {
        ans = reverseHelper(strArray, start, i - 1);
        start = i + 1;
      }
      if (i == strArray.length - 1) ans = reverseHelper(strArray, start, i);
    }
    return ans.join("");
}

let input = "I love Javascript";
console.log(reverseSentence(input));
