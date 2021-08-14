/*
    Create a polyfill for repeat function in JS also in the new created function don't 
    use the actual repeat function of JS.
*/

String.prototype.myrepeat = function (times) {
	let ans = "";
	for (var i = 0; i < times; i++) {
		ans += this;
	}
	return ans;
};

console.log("tes".repeat(4));
