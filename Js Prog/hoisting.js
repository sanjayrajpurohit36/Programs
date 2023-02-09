/*
    What will be the output of the below code.
    Concept: Hoisting
*/

console.log(" x => ", x); // undefined
console.log("y =>", y); // in node used before initialization // in browser reference error
var x = 10;
let y = 10;
