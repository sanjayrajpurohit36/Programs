let promise = new Promise(function (resolve, reject) {
  setTimeout(() => resolve(1), 1000);
});

promise.then(function (result) {
  console.log("first .then", result); // 1
  return result * 2;
});

promise.then(function (result) {
  console.log("second .then", result); // 1
  return result * 3;
});

promise.then(function (result) {
  console.log("third .then", result); // 1
  return result * 4;
});
