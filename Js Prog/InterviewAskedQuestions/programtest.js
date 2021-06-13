/*  Company :NoBroker */

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

// const getPairs = (arr, sum = 10) => { // not a proper logic
//   //you need to write code here with one thing in mind that the complexity should be O(n)
//   let diffMap = {};
//   let Pairs = [];
//   let pairsIndex = [];

//   arr.map((value, key) => {
//     if (diffMap[sum - value] != undefined) {
//       Pairs.push([arr[key], arr[diffMap[sum - value]]]); // Pairs array will contain the pairs
//       pairsIndex.push([key, diffMap[sum - value]]); // pairsIndex wil contain the indexes of pairs
//     } else diffMap[value] = key;
//   });
//   return { Pairs, pairsIndex };
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
 * Will produce the ouput 20
 * normal function defined
 */

// let a = 10;
// let b = 10;

// let result = add(a, b);
// console.log(result);
// function add(a, b) {
//   return a + b;
// }

/**
 * Output function
 * Output: Will throw error add is not defined
 * function assigned to variable declared using var keyword
 */

// let a = 10;
// let b = 10;

// let result = add(a, b);
// console.log(result);
// var add  = function add(a, b) {
//   return a + b;
// }

/**
 * Output function
 * Output: Will throw error add is not defined
 * function assigned to variable declared using let keyword
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
 * Output: Will throw error add is not defined
 * function assigned to variable declared using const keyword
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
