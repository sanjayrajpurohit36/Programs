/**
 * What will be the output of the below code
 * Concept: Call, Appli & Bind in Javascript
 * 
 */

let arr = [1, 2, 3, 4, 5];
let a = arr.filter.call(arr, function(j) {
    if (j) return true;
    else return false;
})
console.log(a);


// Output:  [1,2,3,4,5]