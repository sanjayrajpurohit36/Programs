/*
    Function's prototype
*/

var func = function () { 
    return "hi"; 
};

console.log(func.__proto__); // this will be same as Function.prototype
console.log(Function.prototype);