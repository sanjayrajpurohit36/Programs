/*
  What is an IIFE in JS? Give an example of IIFE.
  Immediately Invoked Function Expression these are also known as Self-Executing Anonymous Function.
  It means these functions get invoked right after they are defined.

  Uses: The benefit of self-invoking functions is that they enable us to execute code once without cluttering 
        the global namespace (without declaring any globals).
*/

// Simple example of IIFE
(function IIFE() {
  console.log("I am IIFE");
})();

// Passing arguments in IIFE
(function IIFE(x) {
  console.log("params in IIFE", x);
})(2);

// create an IIFE to add two numbers
(function IIFE(x, y) {
  console.log("params in IIFE", x + y);
})(2, 3);
