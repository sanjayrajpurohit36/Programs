/*
    Comparing Math functionalities in JS
    Why Math.max() returns -Infinity as according to the name it should be returning Infinity
    Why Math.min() reutrns Infinity as according to the name it should be returning -Infinity.
*/

console.log(Math.max()) // -Infinity
/*
    -Infinity is the initial comparant because almost every other value is bigger than that, 
    that's why when no arguments are given, -Infinity is returned.
*/

console.log(Math.min()) // Infinity
/*
    Infiity is the initial comparant because almst every other value is smaller than that
    that's why when no arguments are given, Infinity is returned
*/

console.log(Math.max() < Math.min()) // True  Reason: -Infinity < Infinity