/*
	What will be the ouput of the following code.
	Question asked In Nagarrow Interview.
*/

function hack() {
	return function hack(h1) {
		return function hack(h2) {
			return h1 + h1;
		};
	};
}

const hack_func = hack();
console.log(hack_func(5)(6)); // 10 the last hack function is adding h1 + h1 which is 5+5 = 10
