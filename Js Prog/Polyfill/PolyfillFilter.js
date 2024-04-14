/*
    Write a polyfill for filter HOF(Higher order function) in js
*/

Array.prototype.myFilter = function (callback) {
    let output = [];
    for (let element of this) {
        let res = callback.call(this, element);
        if (res) {
            output.push(element);
        }
    }
    return output;
};

let ans = arr.filter((ele) => ele % 2 == 0); // this will return the even elements of the array
let ans1 = arr.myFilter((ele) => ele % 2 == 0); // this will also return the same result as of above filter fn will do
console.log(ans, ans1);
