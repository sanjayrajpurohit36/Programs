/* Callback functions
def:- callback functions are first class functions which means that those functions which are being
passed to another functions and can be executed at any time in that parent function. 
those functions are known as callback functions
*/

setTimeout(function () {
  console.log("5 sec ka timer");
}, 5000);

let x = function (y) {
  console.log("inside function x");
  y();
};

x(function y() {
  console.log("inside callback function y");
});
