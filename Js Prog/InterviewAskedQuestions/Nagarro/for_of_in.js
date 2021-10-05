/* 
    Difference between for of & for in
    "of"  will print the values 
    "in" will print the index of the values
*/

let arr = [1, 2, 3];
for (var i of arr) {
	console.log(i); // 1,2,3
}

for (var i in arr) {
	console.log(i); // 0,1,2
}
