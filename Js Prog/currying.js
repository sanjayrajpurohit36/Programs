// currying can be done using a bind function and closures as well.
// Function currying using bind
let multiply = function (x, y) {
  return x * y;
};

let multiplyWith2 = multiply.bind(this, 2); // 2 will be set as default parameter
let ans = multiplyWith2(4);
console.log("=>", ans);

let multiplyWith3 = multiply.bind(this, 3); // 2 will be set as default parameter
ans = multiplyWith3(4);
console.log("=>", ans);

// like this we can create multiple instances of any generic function and use it for multiple purposes.
let add = function (x) {
  return function innerFunctionForAdd(y) {
    return x + y;
  };
};

let copyOfAddResult = add(1)(2);
console.log(copyOfAddResult);
