/*
  What will be the output of the following code
  Topic: Promise, Promise.all
  Here we're rejecting a promise 
*/

var p1 = new Promise((resolve, reject) => setTimeout(() => resolve(1), 3000)); // 1
var p2 = new Promise((resolve, reject) => setTimeout(() => resolve(2), 2000)); // 2
var p3 = new Promise((resolve, reject) =>
  setTimeout(() => reject("Third Promise fails"), 1000)
); // 3

var promiseArray = [p1, p2, p3];

Promise.all(promiseArray)
  .then((res) => console.log(res))
  .catch((err) => console.error(err));

/*
    Here after 1 sec when the p3 promise fails then , promise.all api will return the error 
*/
