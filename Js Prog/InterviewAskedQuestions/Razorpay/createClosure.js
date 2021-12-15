
//    Write a Javascript function create base which takes
//    Input :

/* 
    var input = 10; uncomment these lines to check the output
    var input  = -2 
 */

 const addInBase = createBase(input);
//     And then call addInBase with a constant value 10 always, which should print the 
//     output: input + 10
const output = addInBase(10);

console.log(output);

// Function to Complete
function createBase(input) {
  // Write your code here : Solution
  function addInBase(fixedValue) {
    return input + fixedValue;
  }
  return addInBase;
}



// Test Case1: input = 10, output = 20
// Tese Case2: input = -2, output = 8
// You can generate more test cases by changing the value of input