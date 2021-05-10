/**
 * Function test shows that a is not defined and b is defined outside the function because
 * var a = (b = 3); is interpreted
 * b = 3
 * var a = b
 * so b becomes the global variable and a = b so a is not accessible outisde the function test.
 */
let test = function () {
  var a = (b = 3);
  console.log(a, b);
};
test();
console.log(a, b);
