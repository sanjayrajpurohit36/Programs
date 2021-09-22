/*
	Convert a  given string according to the given example.
	Eg: Input: sanjay Raj Purohit
	Output: S.R. Purohit
*/
function abbrevateName(input) {
	let spaceStack = [];
	let finalString = "";

	if (input.length) {
		for (let i = 0; i < input.length; i++) {
			if (input[i] == " " && input[i + 1] != " ") {
				spaceStack.push(i);
			}
		}

		finalString += input[0].toUpperCase() + ".";
		for (let i = 0; i < spaceStack.length; i++) {
			if (i == spaceStack.length - 1) {
				let lastString = input.slice(spaceStack[i], input.length);
				let surname = " " + lastString.charAt(1).toUpperCase() + lastString.slice(2);
				finalString += surname;
			} else finalString += input[spaceStack[i] + 1].toUpperCase() + ".";
		}
	}

	return finalString;
}

var name = "sanjay raj purohit";
console.log(abbrevateName(name)); // S.R. Purohit
