// //setTimeout examples to be asked in interview
// let x = function () {
//   var i = 1;
//   setTimeout(function () {
//     console.log(i);
//   }, 1000);
//   console.log("hii");
// };
// x();

// Output :
// hii
// 1
// print 1 to 5 numbers after every 1 sec
// let y = function () {
//   for (let i = 0; i <= 5; i++) {
//     setTimeout(function () {
//       console.log(i);
//     }, 1000 * i);
//   }
//   console.log("hii");
// };
// y();

// without using let keyword
let z = function () {
  for (var i = 0; i <= 5; i++) {
    function makeClosure(x) {
      setTimeout(function () {
        console.log(x);
      }, 1000 * i);
    }
    makeClosure(i);
  }
  console.log("hii");
};
z();
