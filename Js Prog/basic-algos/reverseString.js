// Javascript algorithm to reverse a string!

// There are different ways to do this.

// 1.By using the inbuilt reverse method.
const reverseString1 = (str) => {
  return str.split('').reverse('').join('');
};

// 2.By using the for loop.
const reverseString2 = (str) => {
  let reversedStr = '';
  for (let i = str.length - 1; i >= 0; i--) {
    reversedStr += str[i];
  }
  return reversedStr;
};

// 3. By using the forEach array method.
const reverseString3 = (str) => {
  let reversedStr = '';
  str.split('').forEach((st) => {
    reversedStr = st + reversedStr;
  });
  return reversedStr;
};

const output1 = reverseString1('tesla');
const output2 = reverseString2('tesla');
const output3 = reverseString3('tesla');

console.log(output1);
console.log(output2);
console.log(output3);
