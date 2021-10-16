/*
  Write a program to reverse a string without switching the positions of the special characters in the given input stirng.
*/
function reverseString(str) {
  var arr = str.split(""),
    length = str.length,
    startPointer = 0,
    endPointer = length - 1;
  
  while (startPointer < endPointer) {
    if (!(arr[startPointer] >= "a" && arr[startPointer] <= "z")) {
      startPointer += 1;
    } else if (!(arr[endPointer] >= "a" && arr[endPointer] <= "z")) {
      endPointer -= 1;
    } else {
      let tempChar = arr[startPointer];
      arr[startPointer] = arr[endPointer];
      arr[endPointer] = tempChar;
      startPointer += 1;
      endPointer -= 1;
    }
  }
  return arr;
}
var inputArray = ["a,b$c", "m@x", "$@mi", "teacher", "!@#$%"]
var result
inputArray.forEach((element) => {
  result = reverseString(element)
  console.log("reversed arring without changing special chars=>", result.join(""));
})

