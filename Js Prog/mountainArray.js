/* 
    Return true if the array is a mountain array.
    Leetcode Link: https://leetcode.com/problems/valid-mountain-array/
*/

function isMountainArray(arr) {
    let flag = false;
    let counter1 = 0;
    for (var i = 0; i < arr.length; i++) {
    if (!flag) {
        if (arr[i + 1] == arr[i]) {
            return false;
        } else if (arr[i + 1] < arr[i]) {
            flag = true;
        } else {
            counter1++;
        }
    }
    if (flag) {
        if (arr[i + 1] >= arr[i]) {
            return false;
        }
    }
    }
    return flag && counter1 > 0;
}
    

let arr = [0, 1, 5, 3, 2, 0]
console.log(isMountainArray(arr));