/**
 * What will be the output of the below written code. 
 */

// console.log(foo); // Reference error
const a = () => {
    console.log(foo); // undefined because if no value is assigned to variables a then it will get assigned undefined
    console.log(test); // "hi" test has already an assigned value of "hi"
};
let foo;
var test = "hi"
a();