/* 
  Create a polyfill for Object.keys()
*/

Object.prototype.getKeys = function (obj) {
  if (
    typeof obj == "function" || // if obj is a function
    Array.isArray(obj) || // if object is an array
    typeof obj !== "object" // if object is any primitive data type
  ) {
    throw new Error("argument must be an object recevived something else");
  }
  let ans = [];
  let key;
  for (key in obj) {
    ans.push(key);
  }
  ans.pop(); // as getkeys will also get added to this array.
  return ans;
};

let person = { name: "Max", age: "21" };
console.log(Object.getKeys(person));
