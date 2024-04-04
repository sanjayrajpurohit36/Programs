/*
  What will be the output of the following code
  Topic: Promise, Promise.any
  
  It wil wait for the "first" promise to get FULFILLED / RESOLVED and it will ignore the promises which are rejected
  it is a kind of SUCCESS SEEKING PROMISE API

  REJECTION SPECIAL CASE: In this case all the promises are rejected in this case, it will return the 
  aggregated error of all the promises.
*/

var p1 = new Promise((resolve, reject) =>
  setTimeout(() => reject("Promise 1 is rejected"), 3000)
); // 1
var p2 = new Promise((resolve, reject) =>
  setTimeout(() => reject("Promise 2 is rejected"), 2000)
); // 2
var p3 = new Promise((resolve, reject) =>
  setTimeout(() => reject("Promise 3 is rejected"), 1000)
); // 3

var promiseArray = [p1, p2, p3];
Promise.any(promiseArray)
  .then((res) => console.log(res))
  .catch((error) => {
    console.error(error);
    console.log("This will print the array of errors : ", error.errors);
  });

/*
 Here, all the promises are rejected, that's why it will return the array of aggregated errors which is returned 
 by all the promises
*/
