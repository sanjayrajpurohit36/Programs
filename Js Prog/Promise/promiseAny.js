/*
  What will be the output of the following code
  Topic: Promise, Promise.any
  
  It wil wait for the "first" promise to get FULFILLED / RESOLVED and it will ignore the promises which are rejected
  any of the promise is rejected then it will wait for the next promise to get "FULFILLED", then it will return 
  it's result

  it is a kind of SUCCESS SEEKING PROMISE API
*/

var p1 = new Promise((resolve, reject) => setTimeout(() => resolve(1), 3000)); // 1
var p2 = new Promise((resolve, reject) => setTimeout(() => resolve(2), 2000)); // 2
var p3 = new Promise((resolve, reject) => setTimeout(() => resolve(3), 1000)); // 3

var promiseArray = [p1, p2, p3];
Promise.any(promiseArray).then((res) => console.log(res));

/*
 Here, the result of the p3 promise will be returned as it is resolving in 1 sec
*/
