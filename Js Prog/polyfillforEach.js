/*
    Write a polyfill for forEach in JS
    
    ForEach accepts 2 params 
    1. * Callback function with three params (currenValue, index, arr) 
    2. (Optional) thisValue a value which can be passed to the function to be used as its this value, by default 
       it is undefined
    Syntax:
    
    forEach(function callback(currentValue, index, arr){
      console.log(currentValue)
    }, , thisValue)
    
    // OR

    forEach(callback(currentValue, index, arr) => {
      console.log(currentValue)
    }, , thisValue)
    
    Note: * : Required
*/

Array.prototype.myForEach = function (callback) {
  if (typeof callback != "function") {
    throw new Error("Expected a function in argument got something else");
  } else {
    for (let i = 0; i < this.length; i++) {
      callback(this[i], i, this);
      /* Here 
        1. this[i] is the currentValue
        2. i is the element
        3. this is the array
      */
    }
  }
};

[1, 2, 3].myForEach((value, index, array) => {
  console.log(`value: ${value},  index: ${index}, array: ${array}`);
});
