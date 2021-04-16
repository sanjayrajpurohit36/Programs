// Hoisting concept
x(); // it will print yes as the function is hoisted
function x() {
  console.log("yes");
}

// arrowFunc(); // this will print arrowFunc is not a function
/* this will print "this will print arrowFunc is not a function" as arrow functions are not 
hoisted only their declaration is hoisted not the complete expression means only var 
arrowFunction is hoisted it is treated as var.*/
var arrowFunc = () => {
  console.log("yes with arrow function");
};

// This concept

const testObject = {
  testFunc: () => {
    return this;
  },
};

const testFuncCall = testObject.testFunc;
console.log(testFuncCall()); // it will return the object as this will refer to the parent

/*  Key points
1. Arrow function are not hoisted
2. `this` keyword in arrow function is basically what its value would be if 
    function is not there
*/
