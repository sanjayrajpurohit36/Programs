/**
 * What will be the output of the below code?
 */

(function add() {
    console.log(3 + 5);
})()
add();


/**
 * 
 * Ans: It will throw error add is not defined because 
 * IIFE's get declared as annonymus functions even if we give function names.
 * This add will not be there in the global context.
 * 
 */