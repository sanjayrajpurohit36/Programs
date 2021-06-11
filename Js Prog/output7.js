// This question is based on EventLoop and working of Js thread.
// Question: How long do you think the console.log(a++) will print the incremented value.

let a = true;
let counter = 0;

setTimeout(() => {
  a = false;
}, 2000);

while (a) {
  console.log(a++);
}

/* Ans: The reason behind this is that the main thread of Js(callstack) never gets empty because of the infinite while loop
so the eventloop dosent get empty call stack so because of that the callback function of setTimeout doesn't get executed
due to which the value of a will never become false.
That's why the while loop will never end. 
*/
