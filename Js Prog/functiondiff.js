// Hoisting concept
x(); // it will print yes as the function is hoisted
function x() {
  console.log("yes");
}

// arrowFunc(); // this will print arrowFunc is not a function

/* 
Reason : this will print "this will print arrowFunc is not a function" as arrow functions are not 
hoisted only their declaration is hoisted not the complete expression means only var 
arrowFunction is hoisted it is treated as a normal variable in Js.*/
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
console.log(testFuncCall()); 
/* 
  it will return an empty object as FAT arrow functions don't have their own this as this will 
  refer to the parent for their "this"
*/


/*  Key points:-
1. Arrow function are not hoisted
2. `this` keyword in arrow function is basically what its value would be if 
    function is not there.
*/
