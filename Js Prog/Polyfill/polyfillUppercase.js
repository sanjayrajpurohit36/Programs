/*
    Create a polyfill which will convert the array elements to uppercase.
*/

let arr = ["Mango", "apple", "grapes", "watermelon", "string"];
/* Syntax to create a pollyfill for arrays 
   DataType.prototype.functionName 
*/
Array.prototype.upper = function () {
  let newArr = [];
  if (!Array.isArray(this)) {
    throw new Error("Expected Array got something else");
  } else {
    for (let i = 0; i < this.length; i++) {
      if (typeof this[i] == "string") newArr.push(this[i].toUpperCase());
      else newArr.push(this[i]);
    }
  }
  return newArr;
};
console.log(arr.upper());
console.log(["string"].upper());
