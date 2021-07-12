/*
    1. First cause of Memory Leak
    Scope lookup happens when we create global variables means we reserve memory in 
    global space / global object / window object that memory is not garbage collected by the garbage collector.
*/

function someFunc() {
  b = 10;
}

// is the same as

function someFunc() {
  window.b = 10; // Oops!

  // This happens due to scope lookup
  // If the variable does not exist in any scope
  // the JS runtime creates the variable
  // in the GLOBAL scope! 😱
}

// The variable is never cleaned
