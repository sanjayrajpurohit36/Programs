/* Lexical Scope  
    Whenever execition context is created a lexical environment is also created.
    Lexical Environment: It is the local memory of the function + lexical env. of its parent

    uncomment every function & test the output
*/
// function a() {
//   /*
//     function a's lexical sope will have will have local memory
//     + reference to the lexical scope of its parent which is the main block
//    */
//   console.log(b); // undefined (Reason: B is hoisted with a value of undefined)
//   var b = 101;
//   c();
//   function c() {
//     console.log(b); // 101
//     /*
//         The lexical scope of function c will have the local memory
//         + reference to the lexical scope of its parent which is function b()
//         so in b's lexical scope we have a var b so here at line 10
//         it will print the value of b as 10 because there is no var names b
//         inside function c()
//         */
//   }
// }
// a();
// console.log(b); // b is not defined

/******************************************************************/

// var b = 1001;
// function a() {
//   console.log(b); // undefined
//   var b = 101;
//   c();
//   function c() {
//     console.log(b); // 101
//   }
// }
// a();
// console.log(b); // 1001

/*
Output: 
    undefined
    101
    1001
*/

/******************************************************************/

var b = 1001;
function a(b) {
  console.log(b);
  var b = 101;
  c();
  function c() {
    console.log(b);
  }
}
a(b);
console.log(b);

/*
Output: 
    1001 
    101
    1001
*/
