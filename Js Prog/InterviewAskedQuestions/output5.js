/*
    Output question based on the internals of JS, MTQ, CB, Event Loop.
    
    What will be the log sequence of the following code.
*/
let resolver;
const promise = new Promise((resolve) => {
	resolver = resolve;
});

promise.then((res) => {
	console.log(res);
});

setTimeout(() => {
	console.log("1st Timeout cb");
	resolver("Promise Resolved");
}, 3000);

setTimeout(() => {
	console.log("2nd Timeout cb");
}, 3000);

/*
    Output: 
    1st Timeout cb
    Promise Resolved
    2nd Timeout cb


    Reason: The callbacks of the Promises are kept in the "Micro Task Queue", whereas the other callbacks are 
    pushed inside the "Callback Queue" also the tasks inside the Micro Task Queue are given priority in execution 
    that's why after the first callback of setTimeout which will be executed "3sec" the "then" block of the Promise 
    will be executed then the callback of the second Timeout will be executed
*/
