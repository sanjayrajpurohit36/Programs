/**
 * Async is a keyword in Javascript.
 * When we declare a function using the async function then it creates a binding of new async function to the given name.
 * Await keyword is permitted within the function body
 *
 *
 * Due to await JS Engine will wait to get promise executed then only it will move further.
 * But as we know Js is an synchronous single threaded language so, we can't block the main thread of Js
 * so, what happens actually when we write await before a promise is suspends the execution of that particular function
 * until the promise is settled either(resolved / rejected) then only JS Engine will continue executing the function.
 *
 */

const P1 = new Promise((resolve, reject) => {
  setTimeout(() => resolve("Promise P1 is resolved"), 5000);
});

const P2 = new Promise((resolve, reject) => {
  setTimeout(() => resolve("Promise P2 is resolved"), 10000);
});

const P3 = new Promise((resolve) => resolve("Promise P3 is resolved"));

async function checkResolution() {
  console.log("inside check resolution using async await");
  const res1 = await P1;
  console.log(res1);

  const res2 = await P2;
  console.log(res2);

  const res3 = await P3;
  console.log(res3);
}

function checkResolutionWithoutAsyncAwait() {
  console.log("inside check resolution using .then to handle promises");
  P1.then((res) => console.log(res));
  console.log("in between promises");
  P2.then((res) => console.log(res));
  console.log("after promises");
  P3.then((res) => console.log(res));
}

checkResolutionWithoutAsyncAwait();
// checkResolution();

/*
    Output for checkResolution();
    It will wait till 5 sec, then it will print
    "Promise P1 is resolved"
    then it will wait for 10 seconds, which is including the 5 seconds of the previous promise, then it will print
    "Promise P2 is resolved" & "Promise P3 is resolved" together as P3 is not taking any additional time to get resolved 
    so as soon as 10 sec passes both the promises p2, p3 will get resolved.


    Output for checkResolutionWithoutAsyncAwait();
    It will print
    "inside check resolution using .then to handle promises"
    "in between promises"
    "after promises"
    "Promise P3 is resolved"
    all of the above mentioned lines together as all of them are synchronous and "Promise P3 is resolved" is printed because
    Promise P3 is not taking any additional time to get resolved, after the above statements are printed,
    it will take 5 sec to print the result of Promise P1 i.e "Promise P1 is resolved",
    then after another 10 sec which is including the 5 sec of Promise P1 as well the result of Promise P2 will be printed
    i.e: Promise P2 is resolved
*/
