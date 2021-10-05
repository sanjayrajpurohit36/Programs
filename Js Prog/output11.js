/*
    What will be the output of this function
    Concept: Hoisting
*/
function parent() {
	var hoisted = "'I’m a variable";
	function hoisted() {
		return "I’m a function";
	}
	return hoisted;
}
console.log(parent()); // un-comment this and check the output

// Output: Error : hoisted is not a function
/* 
    Reason: In the function parent the var hoisted will have the value "I'm a variable"
    it will not be overwritten by the function hoisted() until we assign 
    the function hoisted to the variable

*/

// Rectified Code:

function parent() {
	var hoisted = "'I’m a variable";
	var hoisted = function hoisted() {
		return "I’m a function";
	};
	return hoisted();
}
console.log(parent());
