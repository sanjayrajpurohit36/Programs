/* 
    What will be the output of the below code:
    Concept: Destructuring
    Defination present on MDN Docs: The destructuring assignment syntax is a JavaScript expression 
    that makes it possible to unpack values from arrays, or properties from objects, 
    into distinct variables.
*/


const a = [1, 2, 3, 4, 5, 6];
const [x,,y,...z] = a;
console.log(x, y, z);


const [, ,] = a; // for ignoring all the values

/*
    1 3 [ 4, 5, 6 ]
    Reason: as in-between x & y there is one extra comma which means we want to ingore the value 
    at the first index of the array hence x will be 1 and x will be 3 and 2 will be ignored.
*/