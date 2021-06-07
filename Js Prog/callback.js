/* Callback functions
def:- Callback functions are first class functions which means that functions can be passed to another functions
& can be executed at any time in that parent function.
First Class Functions: The ability of functions to be used as values, and being able to be passed to another
functions is known as First Class functions/ first Class Members.
*/

setTimeout(function () {
  console.log("5 sec ka timer");
}, 5000);

let x = function (y) {
  console.log("Inside function x");
  y();
};

x(function y() {
  console.log("Inside callback function y");
});

/**
 * Output:
 * Inside function x
 * Inside callback function y
 * 5 sec ka timer
 */
