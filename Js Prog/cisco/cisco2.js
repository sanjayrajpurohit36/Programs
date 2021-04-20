function test(maximum) {
  let answerSum = 0;
  for (let i = 1; i <= maximum; i++) {
    console.log(" i =>", i);
    var number = i.toString();
    let isIntNumberPalindrome = false;
    let isBinNumberPalindrome = false;
    number == number.split("").reverse().join("")
      ? (isIntNumberPalindrome = true)
      : (isIntNumberPalindrome = false);
    var binaryNumber = (i >>> 0).toString(2);
    console.log("binary conversion => ", binaryNumber);
    binaryNumber == binaryNumber.split("").reverse().join("")
      ? (isBinNumberPalindrome = true)
      : (isBinNumberPalindrome = false);
    console.log(isBinNumberPalindrome, isIntNumberPalindrome);
    if (isBinNumberPalindrome && isIntNumberPalindrome) {
      console.log("i => if palindrom", i);
      answerSum = answerSum + i;
    }
  }
  return answerSum;
}

console.log("ans =>", test(5));
