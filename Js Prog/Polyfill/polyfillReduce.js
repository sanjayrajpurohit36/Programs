/* 
    Write a polyfill for reduce function of JS.
*/

Array.prototype.customReduce = function(callback, initialValue) {
  let accumulator = initialValue && initialValue;
  for (let i = 0; i < this.length; i++) {
    if (accumulator) {
      accumulator = callback(accumulator, this[i], i, this);
    } else {
      accumulator = this[i];
    }
  }
  return accumulator;
};

let arr = [1, 2, 3, 4, 5, 6];

console.log(
  arr.customReduce(function(acc, value, index, arr) {
    return acc + value;
  })
);
