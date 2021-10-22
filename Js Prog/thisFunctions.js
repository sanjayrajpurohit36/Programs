/*
    What will be the output of these below written functions.
*/

// Function
function test () { 
    console.log(this); // window / global object
}

// FAT Arrow Function
const test2 = () => {
    console.log(this); // enpty this object {} FAT arrow functions don't have their own this.
}

const  test3 = function() { 
    console.log(this) //  window / global object
}

test(); 
test2(); 
test3();

