// an "immediately" resolved Promise
const executor = resolve => resolve("done!");
const promise = new Promise(executor);

promise.then(executor); // this alert shows last (*)

function hi() {
    console.log("code finished"); // this alert shows first
}