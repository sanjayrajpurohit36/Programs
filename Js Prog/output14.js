/*
	What will be the output of the following JS code.
*/
var r = [];
for (var i = 0; i < 10; i++) {
	r.push(function () {
		return i;
	});
}
console.log(r[1]()); // 10
