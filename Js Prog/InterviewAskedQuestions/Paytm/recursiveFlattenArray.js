/**
 * WAP to flatten the array using recursion
 * 
 * @param {*} arr 
 * @param {*} res 
 * @param {*} index 
 * @returns 
 */

function flattenArray(arr = [], res = [], index = 0) {
    if (!arr[index]) {
        return res;
    } else {
        if (Array.isArray(arr[index])) {
            res = [...res, ...arr[index]];
        } else {
            res = [...res, arr[index]];
        }
        let result = flattenArray(arr, res, index + 1);
        return result;
        
    }
}

// Test cases

var t1 = [1, 2, 3, [4, 5, 6], 7, 8, [9, 10]];
var t2 = [12,2,4,6,[],[7,8]]
console.log(flattenArray(t1));
console.log(flattenArray(t2));