let x = 0; // false 0
let promiseResult = new Promise((resolve, reject) => {
  setTimeout(function () {
    x = 1;
    console.log("Inside setTimeout", x);
  }, 1000);
})
  .then((resolve) => {
    console.log("inside .then block");
    resolve(x);
  })
  .catch((error) => {
    console.log("error in promise");
  });
console.log(promiseResult);

console.log("Outside setTimeout", x);
