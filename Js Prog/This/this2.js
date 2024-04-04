/*
    What is the output of the following code
*/

function x() {
  console.log(this); // window object due to "this substitution"
}
x();
