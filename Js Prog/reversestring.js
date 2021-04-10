var str = "a,b$c",
  arr = str.split(""),
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

console.log("reversed arring without changing special chars=>", arr.join(""));
