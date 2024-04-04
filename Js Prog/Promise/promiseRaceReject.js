/* 
  What will be the output of the following code
  Topic: Promise, Promise.race
  Working: It waits for the first promise to get resolved / reject and goes forward with its result / error.
  Use Case: if any promise is rejected it will throw the error and that has to be handled by the catch block
 */

var p1 = new Promise((resolve, reject) =>
  setTimeout(() => reject("Promise 1 is rejected"), 0)
); // 1
var p2 = new Promise((resolve, reject) => setTimeout(() => resolve(2), 2000)); // 2
var p3 = new Promise((resolve, reject) => setTimeout(() => resolve(3), 1000)); // 3

var promiseArray = [p1, p2, p3];

Promise.race(promiseArray)
  .then((res) => console.log(res))
  .catch((error) => {
    console.log(error);
  });
