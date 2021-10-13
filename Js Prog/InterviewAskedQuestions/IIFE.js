/*
    Give an example of IIFE
*/

// Simple example of IIFE
(function IIFE() {
  console.log("I am IIFE");
})();

// Passing arguments in IIFE
(function IIFE(x) {
  console.log("params in IIFE", x);
})(2);
