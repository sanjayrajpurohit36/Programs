//WAP TO VALIDATE PALINDROME (BOTH STRINGS AND DIGITS)!

// There are different ways to do this.

// 1.By using the inbuilt reverse method.
const validatePalindrome1 = (str) => {
  const str1 = str;
  const str2 = str.split('').reverse().join('');
  str1 === str2 ? console.log('palindrome!') : console.log('not a palindrome!');
};

validatePalindrome1('mom');

// 2. By using the forEach array method.
const validatePalindrome2 = (str) => {
  let newStr = '';
  const str1 = str;
  str.split('').forEach((st) => (newStr = st + newStr));
  str1 === newStr
    ? console.log('palindrome!')
    : console.log('not a palindrome!');
};

validatePalindrome2('nun');

//VALIDATE PALINDROME - DIGIT!

const validateDigitPalindrome = (int) => {
  const number1 = int;
  const number2 = parseInt(int.toString().split('').reverse().join(''));
  number1 === number2
    ? console.log('palindrome!')
    : console.log('not a palindrome!');
};

validateDigitPalindrome(456);
