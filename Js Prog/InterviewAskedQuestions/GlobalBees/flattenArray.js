/*
    You're given an array which can have a n level of nested arrays,
    WAP which flattens all the nested arrays in the given array and returns a single 
    array of Numbers.
    Eg: Input : [1,2,[3,[4],5], [6,7], 8 [9]]
    Output: [1,2,3,4,5,6,7,8,9]

    Eg2: Input [[[1, 2, 3], [[[21, 34]]], 7], 6]
    Output: [1, 2, 3, 21, 34, 7, 6]
*/

function flattenArray(arr = [], res = []) {
    for (let i = 0; i < arr.length; i++) {
        if (Array.isArray(arr[i])) {
            flattenArray(arr[i], res);
        } else {
            res.push(arr[i]);
        }
    }
    return res;
}
// Test cases
var t1 = [[1, 2, 3], 4, 5, [6, 7, [8, 9]]];
var t2 = [[[1, 2, 3], [[[21, 34]]], 7], 6];
var t3 = [1, 2, [3, [4], 5], [6, 7], 8, [10]];

console.log(flattenArray(t1));
console.log(flattenArray(t2));
console.log(flattenArray(t3));

// Without using the res array in the function params

function flattenArrayApproach(arr) {
    let res = [];
    for (let element of arr) {
        if (Array.isArray(element)) {
            let rCallAns = flattenArrayApproach(element);
            res = [...res, ...rCallAns];
        } else {
            res.push(element);
        }
    }
    return res;
}

console.log(flattenArrayApproach(t1));
console.log(flattenArrayApproach(t2));
console.log(flattenArrayApproach(t3));
