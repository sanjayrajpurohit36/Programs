/* Observe carefully and answer
    For Answers go to EOF
    Concepts Innvolved CB(Callback Queue) , MTQ (Micro Task Queue)
*/
// Output 1
// console.log(1);
// setTimeout(() => {
//   console.log(2);
// }, 0);
// Promise.resolve().then(function cb() {
//   setTimeout(() => {
//     console.log("in pro");
//   }, 2000);
// });
// console.log(3);

// Output 2
// console.log(1);
// setTimeout(() => {
//   console.log(2);
// }, 0);
// Promise.resolve().then(function cb() {
//   setTimeout(() => {
//     console.log("Set timeout callback inside promise");
//   }, 1000);
// });
// console.log("coming out before till the timer runs");
// setTimeout(() => {
//   console.log(3);
// }, 1000);

//Output 3
// console.log(1);
// setTimeout(() => {
//   console.log(2);
// }, 0);
// Promise.resolve().then(function cb() {
//   console.log("Set timeout callback inside promise");
// });
// setTimeout(() => {
//   console.log(3);
// }, 1000);

//Output 4
// console.log(1);
// setTimeout(() => {
//   console.log(2);
// }, 0);
// Promise.resolve().then(function cb() {
//   setTimeout(() => {
//     console.log("Set timeout callback inside promise");
//   }, 1000);
// });
// console.log("coming out of promise without waiting for cb to execute");
// setTimeout(() => {
//   console.log(3);
// }, 1000);

/*Answers
Output 1
1
3
2
in pro



Output 2
1
2 
3 
Set timeout callback inside promise


Output 3
1
Set timeout callback inside promise
2
3

Output 4
1
coming out before till the timer runs
2
3
Set timeout callback inside promise
*/
