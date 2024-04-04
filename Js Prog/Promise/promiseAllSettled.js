/*
  What will be the output of the following code
  Topic: Promise, Promise.allSettled

  Use cases:
  Success of all promises:
  It will wait for all the promises to getSettled no matter whether a promise fails or gets success, it will wait and then
  only will return the array of result.
  
  Failure of any one promise:
  When a promise is rejected / fails then it will return the error with the result of other promises in the result array 
  instead of throwing the error
*/

var p1 = new Promise((resolve, reject) => setTimeout(() => resolve(1), 3000)); // 1
var p2 = new Promise((resolve, reject) => setTimeout(() => resolve(2), 2000)); // 2
var p3 = new Promise((resolve, reject) => setTimeout(() => resolve(3), 1000)); // 3

var promiseArray = [p1, p2, p3];
Promise.allSettled(promiseArray).then((res) => console.log(res));

/*
    Here it will wait for 3 seconds so that all the promises get settled and then it will return the result

*/
