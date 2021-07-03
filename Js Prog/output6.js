// This is an special case in js where we have same name of local and global var.
var x = 1;
function test() {
  console.log(x); // undefined
  // Js will try to find the variable x in the execution contexet of function test() & as var x is initialized at line 8 & it will be hoisted in the function's execution context with a default value of undefined
  if (x) {
    var x = 200;
    console.log("The value of x in if:", x);
  } else {
    console.log;
    x = 400;
  }
  console.log("The value of x:", x);
}
test();

/*
    This code will execute the else condition only because it has value of x = undefined
*/
