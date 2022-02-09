/**
 * What will be the output of the below written
 * 
 */

(function greet(null) {
    console.log(null);
})('I am null');

/**
 * Ans: Syntax Error
 * Any reserved keyword can't be used as a function param. as we know that null is a reserved keyword in Javascript so 
 * it can't be used as a function param.
 * */    

(function greet(NaN) {
    console.log(NaN);
})('I am null');


/**
 * Ans: I am null
 * undefined is not a reserved keyword in Javascript its a value.
 * 
 * Note: Similarly NaN is also a value not a reserved keyword
 */