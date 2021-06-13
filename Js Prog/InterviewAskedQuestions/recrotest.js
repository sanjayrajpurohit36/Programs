/*                 Company : Recro              */

// const add = (a) => {
//   return a + a;
// };
// const subt = (a) => {
//   return a - a;
// };
// function test(fnAry, a) {
//   let ans;
//   ans = fnAry.forEach((func) => {
//     let check = func(a);
//     console.log(check);
//     return check;
//   });
//   return ans;
// }

// console.log(test([add, subt], 20));

// function newBind() {
//   return function () {
//     console.log(this.name);
//   };
// }

// function test() {
//   console.log("yes");
// }
// let obj = {
//   name: "Sanjay",
// };
// let callFunc = obj.newBind(obj);

const obj = { name: "sanjay" };
obj.name = "rahul";
console.log("==>", obj);

// done tested
// var check = 10;
// (() => {
//   var check = 100;
//   console.log(check);
//   var check = 20;
// })();
// console.log(check);
