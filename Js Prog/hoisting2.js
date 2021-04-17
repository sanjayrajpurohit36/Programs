console.log(y);
let y = 10;
(() => {
  const x = 20;
  console.log("x inside func =>", x);
  y = 100;
  //   x = 200; // will throw an error here re assignment of const variable.
})();
console.log("x outside func=>", y);
