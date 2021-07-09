/*
    Create a function which will accept all the type of arguments & return them sum of all the integer values only
*/
function addAll(...args) {
  let sum = 0;
  args.forEach((value) => {
    if (typeof value == "number" && !Number.isNaN(value)) {
      sum += value;
    }
  });
  return sum;
}

console.log(addAll(7, "8", 9)); // 16
console.log(addAll(NaN));
console.log(addAll(NaN, 1, 2, 3, 4.5, null, {}));
