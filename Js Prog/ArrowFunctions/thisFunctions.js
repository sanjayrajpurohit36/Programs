/*
    What will be the output of these below written functions.
*/

// Function
// function test() {
//   console.log(this); // window / global object
// }

// FAT Arrow Function ES6 feature
const test2 = () => {
  console.log(this);
  /* 
    Note: Run this code in browser scripts
    window / global object as the FAT arrow functions don't have their own this, 
    so they access the value of "this" object from their parent's scope, which in this case is 
    global object / window object
  */
};

// const  test3 = function() {
//     console.log(this) //  window / global object
// }

// test();
test2();
// test3();
