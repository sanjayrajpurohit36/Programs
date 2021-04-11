/* 
    1. function declaration/ function statement
    2. function expression
    3. first class functions
    4.
*/

// in many interiew it is asked.
console.log(1);
setTimeout(function () {
  // this code will be handled by browser call stack so it will execute after 1 sec but till then execution will not stop it will go to next stage and will execute console.log() written below.
  console.log(2);
}, 1000);
console.log(3);

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
