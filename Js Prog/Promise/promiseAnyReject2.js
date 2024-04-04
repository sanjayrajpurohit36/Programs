/*
  What will be the output of the following code
  Topic: Promise, Promise.any
  
  It wil wait for the "first" promise to get FULFILLED / RESOLVED and it will ignore the promises which are rejected
  it is a kind of SUCCESS SEEKING PROMISE API

  REJECTION CASE
*/

var p1 = new Promise((resolve, reject) => setTimeout(() => resolve(1), 3000)); // 1
var p2 = new Promise((resolve, reject) =>
  setTimeout(() => reject("Promise 2 is rejected"))
); // 2
var p3 = new Promise((resolve, reject) =>
  setTimeout(() => reject("Promise 3 is rejected"), 1000)
); // 3

var promiseArray = [p1, p2, p3];
Promise.any(promiseArray).then((res) => console.log(res));

/*
 Here, the third promise which will settle in 1 second, is rejected, 
 the second promise which will settle in 2 seconds is also rejected even though it will wait for the next 
 promise to fulfill so that it can return the result of the "first fulfilled promise".
 After 3 seconds promise 1 will get resolved so, it will return the result of the second promise
*/
