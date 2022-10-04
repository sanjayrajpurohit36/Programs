/*
    What will be the output of these below written functions.
*/

// Function
// function test () {
//     console.log(this); // window / global object
// }

// FAT Arrow Function
const test2 = () => {
    console.log(this); // window / global object as the FAT arrow functions don't have their own this, so they access this from their parent scope.
}

// const  test3 = function() {
//     console.log(this) //  window / global object
// }

// test();
test2();
// test3();

