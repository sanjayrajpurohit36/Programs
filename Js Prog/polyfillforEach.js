/*
    Write a polyfill for forEach in JS
*/

Array.prototype.myForEach = function (callback) {
  if (typeof callback != "function") {
    throw new Error("Expected a function in argument got something else");
  } else {
    for (let i = 0; i < this.length; i++) {
      callback(this[i]);
    }
  }
};

[1, 2, 3].myForEach((value) => {
  console.log(value);
});
