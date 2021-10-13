/* 
    Write a Program to reverse a given number.
*/

function reverseANum(x) {
  let rev_num = 0;
  while (x > 0) {
    rev_num = rev_num * 10 + (x % 10);
    x = Math.floor(x / 10);
  }
  return rev_num;
}

var result = reverseANum(123);
console.log(result);
