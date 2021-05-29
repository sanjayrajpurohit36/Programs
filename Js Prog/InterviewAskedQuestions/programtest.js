// These programs were asked to me in interview at Nobroker

/**
 *  Objective: create a function to remove duplicates from an array
 *  @function removeDuplicates
 *  @return array of unique elements
 */
// function removeDuplicates(arr) {
//   let aryMap = {};
//   arr.forEach((i) => {
//     if (aryMap[i]) aryMap[i] = aryMap[i] + 1;
//     else aryMap[i] = 1;
//   });

//   return Object.keys(aryMap);
// }

// console.log(removeDuplicates([1, 2, 4, 5, 2, 8, 1, 2, 7, 3, 5]));

/**
 *  Objective : return array of all the pairs having sum equals to the given value
 *  @function getPairs(arr, sum)
 *  @return array of pairs having sum equal to given value
 */
var arr = [-1, 0, 1, 2, 3, 5, 5, 6, 7, 10, 11];

const getPairs = (arr, sum = 10) => {
  //you need to write code here with one thing in mind that the complexity should be O(n)
  let diffMap = {};
  let Pairs = [];
  let pairsIndex = [];

  arr.map((value, key) => {
    if (diffMap[sum - value] != undefined) {
      Pairs.push([arr[key], arr[diffMap[sum - value]]]); // Pairs array will contain the pairs
      pairsIndex.push([key, diffMap[sum - value]]); // pairsIndex wil contain the indexes of pairs
    } else diffMap[value] = key;
  });
  return { Pairs, pairsIndex };
};

console.log("Pairs=> ", getPairs(arr));

// closure
// function outer() {
//   var x = 10;
//   function inner() {
//     // access
//     console.log(x);
//   }
//   return inner;
// }

// let closure = outer();
// closure();

/**
 * Output function
 */
// (function () {
//   var a = (b = 19);
// })();

// a here is not defined
// b here is 19
// console.log(typeof a !== "undefined"); //false
// console.log(typeof b !== "undefined"); // true
// console.log(typeof "jeet" + "<br>"); // string+<br>
// console.log(typeof 25 + "<br>"); // number<br>
// console.log(typeof a); // undefined
// console.log(typeof typeof a); // string

/**
 * Output function
 */

// let a = 10;
// let b = 10;

// let result = add(a, b);
// console.log(result);
// var add = (a, b) => {
//   return a + b;
// };

/**
 * Output function
 */

// let a = 10;
// let b = 10;

// let result = add(a, b);
// console.log(result);
// let add = (a, b) => {
//   return a + b;
// };

/**
 * Output function
 */

// let a = 10;
// let b = 10;

// let result = add(a, b);
// console.log(result);
// const add = (a, b) => {
//   return a + b;
// };

/**
 *  Objective: create a function to remove duplicates from an array
 *  @function removeDuplicates
 *  @return array of unique elements
 */
// function removeDuplicates(arr) {
//   let aryMap = {};
//   arr.forEach((i) => {
//     if (aryMap[i]) aryMap[i] = aryMap[i] + 1;
//     else aryMap[i] = 1;
//   });

//   return Object.keys(aryMap);
// }

// console.log(removeDuplicates([1, 2, 4, 5, 2, 8, 1, 2, 7, 3, 5]));

/**
 *  Objective : return array of all the pairs having sum equals to the given value
 *  @function getPairs(arr, sum)
 *  @return array of pairs having sum equal to given value
 */
// const arr = [-1, 0, 1, 2, 3, 5, 5, 6, 7, 10, 11];

// const getPairs = (arr, sum = 10) => {
//   let aryMap = {};
//   arr.forEach((i) => {
//     aryMap[i] = true;
//   });

//   //you need to write code here with one thing in mind that the complexity should be O(n)
//   let sumMap = {};
//   arr.forEach((element) => {
//     sumMap[element] = sum - element;
//   });
//   let Pairs = [];

//   arr.forEach((i) => {
//     if (aryMap[sum - i]) {
//       aryMap[i] = false;
//       Pairs.push([i, sum - i]);
//     }
//   });
//   return Pairs;
// };

// console.log("Pairs=> ", getPairs(arr));

// closure
// function outer() {
//   var x = 10;
//   function inner() {
//     // access
//     console.log(x);
//   }
//   return inner;
// }

// let closure = outer();
// closure();

/**
 * Output function
 */
// (function () {
//   var a = (b = 19);
// })();

// // a here is not defined
// // b here is 19
// console.log(typeof a !== "undefined"); //false
// console.log(typeof b !== "undefined"); // true
// console.log(typeof "jeet" + "<br>"); // string+<br>
// console.log(typeof 25 + "<br>"); // number<br>
// console.log(typeof a); // undefined
// console.log(typeof typeof a); // string

/**
 * Output function
 */

// let a = 10;
// let b = 10;

// let result = add(a, b);
// console.log(result);
// var add = (a, b) => {
//   return a + b;
// };

/**
 * Output function
 */

// let a = 10;
// let b = 10;

// let result = add(a, b);
// console.log(result);
// let add = (a, b) => {
//   return a + b;
// };

/**
 * Output function
 */

// let a = 10;
// let b = 10;

// let result = add(a, b);
// console.log(result);
// const add = (a, b) => {
//   return a + b;
// };

/**
 * Output function
 */

// let a = 10;
// let b = 10;

// let result = add(a, b);
// console.log(result);
// function (a, b) => {
//   return a + b;
// };
