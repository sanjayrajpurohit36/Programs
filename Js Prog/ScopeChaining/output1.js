/**
 * What will be the output of the below mentioned JS code.
 */


let a = 5;
function b() {
  ++a;
  function c() { ++a; }
  c();
  var a;
  ++a;
}
b();
console.log(a);


/**
 * 
 * Ans:  5
 * ans var a is also declared in function b which will get hoisted
 * and will be initialied a value of undefined so any preIncrement / postIncrement
 * will not work on undefined 
 * 
 * Note: What will be the output if we comment the line no 11
 * 
 * */ 
