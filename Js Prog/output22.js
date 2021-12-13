/*
    Run this script in browser script section to get the actual output or run this script with html file.
*/

function bark() { 
    console.log("woof");
  }
  
  bark.animal = "dog" // this will become global object
  console.log(global) // this window object will have two keys named as bark , one is the function and another is the object

  
  console.log(this) // bark: [Function: bark] { animal: 'dog' }