/*
    Implement f(g(x)) functionality
    where f(x) = x + x & g(x) = x * x;


    Node: The given expressions/functions f(x), g(x)  can we anything.
    Concept: Functinon Currying
*/

const f = (x) => x + x; // creating the f(x) functionality
const g = (y) => y * y; // creating the g(y) functionality


const inputValue = 10;
let ans = f(g(inputValue));
console.log(ans);

