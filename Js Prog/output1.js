/* 
    1. function declaration/ function statement
    2. function expression
    3. annonyus function
    4. Named function expression
    5. first class functions
*/

// in many interiew it is asked.
console.log(1);
setTimeout(function () {
  // this code will be handled by browser call stack so it will execute after 1 sec but till then execution will not stop it will go to next stage and will execute console.log() written below.
  console.log(2);
}, 1000);
console.log(3);

// test

// abc(); abc will be called because abc is created in memory and hoisted but
// x(); this function is not hoisted as till the compiler reaches the last line the x is undefined but we have accesses it before initialization
// during the memory creation phase the abc() is assigned in memory and hoisted but not x as x is treated like a normal variable and assigned undefined at the initial phase.

// function declaration or function statement
function abc() {
  console.log("Function abc called");
}
abc();
// function expression
// when ever a function is assigned to a variable
let x = function () {
  // function acts like a value.
  console.log("inside function x");
};
x();
/* difference between function expression and function statement/ declaration is hoisting.
/ function statement/declaration is hoisted but not function experesion. */

// annonymus function
//def:  these functions are functions without a name, these can be used at the place of values, for using then we must assign them to a vaiable
let annonymus = function () {
  console.log("annonymus function is called");
};
annonymus();

// named function expresssion
// these are functions expression in which the function has its own name
let namedFunctionExp = function xyz() {
  console.log("named function expression called", xyz);

  // if we want to access this function xyz inside itself it will be accessed but will not be accessed outside
};
namedFunctionExp();
// xyz();  this will not work because the function xyz is not created in outer scope that's why its not accessible outside.

// params and arguments
var test = function (param1, param2) {
  console.log("consoling parmaters", param1, param2);
};
test(1, 2);
// these 1,2 are arguments

// First class functions / Functions are first class citizens
/* functions are able to get passed to another function as arguments, and can be returned as well
   The ability of functions to get passed as an argument and can be used as values is known as first class functions and which also can be returned. 
*/
var firstClassFunction = function (functionAsParam) {
  console.log("consoling function as param", functionAsParam);
  functionAsParam();
};

firstClassFunction(function abc() {
  console.log(" I will be passed as as an argument");
});
