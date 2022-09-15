/*
    What will be the output of the following code snippet
    Concept: Promise, Event Loop
*/

const delay = 2000;
console.log("Before Proimise starts")
const promise = new Promise((resolve, reject) => {
    if(!delay) reject("No delay passed to Promise is rejected")
    setTimeout(() => {
        resolve("Promise resolved after 2 sec")
    }, delay);
})


console.log("After promise starts")
promise.then((response) => {
    console.log(response);
}).catch((error) => {
    console.log(error);
})
console.log("After promise ends")



/*
    Output:

    Before Proimise starts
    After promise starts
    After promise ends
    and after 2 sec of delay
    Promise resolved after 2 sec
*/