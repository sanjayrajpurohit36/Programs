// This file contains output programs which includes concepts of function hoisting.

// Program 1
// function foo() {
//   var bar = function () {
//     return 3;
//   };
//   return bar();
//   var bar = function () {
//     return 8;
//   };
// }
// console.log(foo());

// Program 2
// function foo() {
//   var bar = function () {
//     return 3;
//   };
//   function bar() {
//     return 8;
//   }
//   return bar;
// }

// console.log(foo()());

// Program 3
function foo() {
  var bar = function () {
    return 3;
  };
  return function bar() {
    return 8;
  };
}

console.log(foo()());

/*
Answers
Program 1
3

Program 2
3

Program 3
8
*/
