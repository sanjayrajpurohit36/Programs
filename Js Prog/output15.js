/*
	What will be the output of the following code
	Concept: setTimeout, var/let, closure
*/


for (var i = 0; i < 3; i++) {
	setTimeout(() => console.log(i), 1);
}

/*
	Output: this will print
	3 3 3
*/

console.log("using let var")
for (let i = 0; i < 3; i++) {
	setTimeout(() => console.log(i), 1);
}
/*
	Output: this will print
	0 1 2
*/

// using only setTimeout and its third param
for (var x = 0 ; x < 5; x++) {
    setTimeout((x) => {
        console.log(x)
    }, 1000, x)
}
/*
	Output: this will print
	0 1 2 3 4
*/

// using function closure
for (var j = 0 ; j < 5; j++) {
	(function(j) {
		setTimeout(() => {
			console.log(j)
		}, 1000, j)
	})(j)
}
/*
	Output: this will print
	0 1 2 3 4
*/