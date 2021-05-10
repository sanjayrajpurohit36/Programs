// var a = 10;
(function () {
  var a = (b = 3);
  // console.log("inside function", a);
})();
// console.log(a);
console.log(b);
