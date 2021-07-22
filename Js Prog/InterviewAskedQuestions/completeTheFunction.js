/*
    Complete the function p so that p1,p2,p3 gives the sum of the arguments passed.
    Note: There can be N number of arguments which can be passed.
*/

function p(...args) {
  let n = args.splice(0, 1)[0]; // extracting out the function which we need to call for calculations after this in args the remaning arguments will be left
  /**
   * return function accepting the rest arguments which user might/might not pass
   */
  return function (...args2) {
    /* 
        creating an array of arguments passed, in a sequence manner so that if calculation includes 
        (subtraction or division) it should not affect the result
        Eg: 2 - 3 != 3 - 2
            10 / 2 != 2 / 10
    */
    let arg = [...args, ...args2];
    return n.apply({}, arg); // using apply to call the function as we have the arguments in form of an array
  };
}

var a = 1;
var b = 2;
var c = 3;

function calc(a, b, c) {
  return a + b + c;
}

var p1 = p(calc, a);
console.log(p1(b, c)); // 6

var p2 = p(calc, b);
console.log(p2(a, c)); // 6

var p3 = p(calc);
console.log(p3(a, b, c)); // 6
