/* Resolve executes the next "then" block but reject executes the next "catch" 
                block.
            */
var x = 1;
let promise = new Promise(function (resolve, reject) {
  if (x == 1) {
    resolve(x);
  } else {
    reject(x);
  }
});

promise
  .then((res) => {
    console.log("It is reolved because the value is:", res);
    success();
  })
  .catch((Error) => {
    console.log("It is rejected because the value is:", Error);
    failure();
  });

function success() {
  console.log("Succeed", promise);
  return 0;
}
function failure() {
  console.log("Failed", promise);
  return 0;
}
