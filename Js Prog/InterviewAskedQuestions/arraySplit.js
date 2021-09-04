/*
    
    You're given an array and a size as arguments to a function, write a function which creates the pairs 
    of elements of the given size to the function and appends them to a new array.
    Eg: Array = [1,2,3,4,5], size = 2
        Output:  [[1,2], [3,4], [5]]
    
    By: Asked in Razorpay Interview
*/
function splitArray(arr, size) {
	let count = 0;
	let temp = [];
	let ans = [];
	for (let i = 0; i < arr.length; i++) {
		temp.push(arr[i]);
		count++;
		if (count === size) {
			ans.push(temp);
			temp = [];
			count = 0;
		}
	}
	if (temp.length != 0) {
		ans.push(temp);
	}
	return ans;
}

console.log(splitArray([1, 2, 3, 4, 5], 2)); // [[1, 2], [3, 4], [5]];
console.log(splitArray([1, 2, 3, 4, 5], 5)); // [ [ 1, 2, 3, 4, 5 ] ]
console.log(splitArray([1, 2, 3, 4, 5], 3)); // [ [ 1, 2, 3 ], [ 4, 5 ] ]
console.log(splitArray([1, 2, 3, 4, 5], 1)); // [ [ 1 ],[ 2 ],[ 3 ],[ 4 ],[ 5 ] ]
