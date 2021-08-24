/* 
    Create a function which counts how many times a pattern exists in a string provided.
    eg: Text: woman
        Pattern: man
        Output: "man" occurs in "woman" 1 times.

        Text: papapa
        Pattern: pa
        Output: "pa" occurs in "papapa" 3 times.

    Asked In: Sigmoid
*/

function patterMatch([input, pattern]) {
	let i = 0,
		j = 0,
		counter = 0;
	if (typeof input != "string" || typeof pattern != "string") {
		throw new Error("Input is not in valid format, only strings are accepted.");
	} else {
		while (i < input.length) {
			if (input[i] === pattern[j]) {
				i++;
				j++;
				if (j === pattern.length) {
					counter++;
					j = 0;
				}
			} else {
				i++;
			}
		}
		console.log(`"${pattern}" occurs in "${input}" ${counter} times. `);
	}
}

let testCases = [
	["woman", "man"],
	["papapa", "pa"],
	["hello", "ly"],
	["lllll", "l"],
	["text", ""],
	[" ", " "],
	["hello how are you ?", "?"],
	["hello how are you ?", " "],
	// [123, 123], Error will be thrown as the input type is not string check by uncommenting it
	// [
	// 	{name: "Sam", age: "23"},
	// 	{name: "Max", age: "26"},
	// ],
];
testCases.forEach((value, key) => {
	patterMatch(value);
});
