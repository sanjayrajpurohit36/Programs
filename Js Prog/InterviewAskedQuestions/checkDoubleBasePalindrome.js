/**
 * WAP a program to return all the numbers & their sum till a given number (given by user)
 * which are palindrome in decimal & binary number systems
 * @Function checkPalindrome
 * @returns Object {array: [], sum: Integer}
 */

function checkPalindrome(maximum) {
  let answerSum = 0;
  let DBP = []; // Double Base Palindrome Numbers Array
  for (let i = 1; i <= maximum; i++) {
    var number = i.toString();
    let isIntNumberPalindrome = false;
    let isBinNumberPalindrome = false;
    number === number.split("").reverse().join("")
      ? (isIntNumberPalindrome = true)
      : (isIntNumberPalindrome = false);
    var binaryNumber = (i >>> 0).toString(2); // syntax to convert decimal to binary
    //  console.log("binary number => ", binaryNumber);
    binaryNumber == binaryNumber.split("").reverse().join("")
      ? (isBinNumberPalindrome = true)
      : (isBinNumberPalindrome = false);
    if (isBinNumberPalindrome && isIntNumberPalindrome) {
      DBP.push(i);
      answerSum = answerSum + i;
    }
  }
  return { array: DBP, sum: answerSum };
}

console.log(checkPalindrome(5));
