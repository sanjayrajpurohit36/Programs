/*
    What will be the output of the following program
    Topic: tagged template literals
*/

function printPersonInfo(one, two, three) {
	console.log(one);
	console.log(two);
	console.log(three);
}

const Person = "Sanjay";
const age = 25;

printPersonInfo`${Person} is ${age} years old.`;
