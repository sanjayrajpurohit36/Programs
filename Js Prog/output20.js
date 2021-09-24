/*
    What will be the output of the following code.
*/

function ff() {}

var second = function () {};

function tfunc() {}

var tfunc = new tfunc();

console.log(typeof ff); // function
console.log(typeof second); // function
console.log(typeof tfunc); // object
