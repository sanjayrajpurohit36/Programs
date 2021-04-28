// console.log(y); // will throw can error of reference undefined in browser & used before initialization in node

let y = 10;
(() => {
  const x = 20;
  console.log("x inside func =>", x);
  y = 100;
  //   x = 200; // will throw an error here re assignment of const variable.
})();
console.log("y outside func=>", y);
