/* Output program based on hoisting. */

function bar() {
  return foo;
  foo = 1;
  function foo() {
    var foo = "1";
  }
}

console.log(typeof bar()); // function
console.log(global.foo, global);

/* 
    bar function will create a var foo over which function will be overwritten
    so the type of foo will be 'function'
*/
