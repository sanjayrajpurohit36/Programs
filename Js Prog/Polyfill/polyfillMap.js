/*
    Write a polyfill for map HOF in Javascript

*/

let arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 0, 9, 8, 66, 6];

Array.prototype.myMap = function (callback) {
    if (typeof callback != "function") {
        throw new Error("Expected a function in argument got something else");
    } else {
        for (let i = 0; i < this.length; i++) {
            callback.call(this, this[i]);
        }
    }
};

arr.map((ele) => console.log(ele));
arr.myMap((ele) => console.log(ele));
