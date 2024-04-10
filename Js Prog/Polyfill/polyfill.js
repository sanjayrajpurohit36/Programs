// Creating a new function to array methods using prototype

Array.prototype.myFilter = function (callback, context) {
  console.log(typeof callback);
  if (typeof callback != "function") {
    throw new Error("callback must be a function");
  }
  const arr = [];
  for (let i = 0; i < this.length; i++) {
    if (callback.call(context, this[i], i, this)) {
      arr.push(this[i]);
    }
  }
  return arr;
};

try {
  // to check whether the function is returning the error or not, so don't send ans as function
  let ans = [(10, 20, 10, 10, 0, 20)].myFilter((element) => {
    return element > 10;
  });
  //   ans.myFilter(); //for error
  console.log("filtered array=>", ans);
} catch (error) {
  console.log(error);
}
