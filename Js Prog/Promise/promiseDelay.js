/*
    Create a promise which gets resolved after 2 sec=
*/
const delay = 2000;

const promise = new Promise((resolve, reject) => {
    setTimeout(() => {
        resolve("Promise resolved after 2 sec")
    }, delay);
})


promise.then((response) => {
    console.log(response);
}).catch((error) => {
    console.log(error);
})