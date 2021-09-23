/* 
    What will be the output of this JS code snippet.
*/
function bar() {
	return foo;
	foo = 1;
	function foo() {
		var foo = "1";
	}
}
console.log(bar()); // [Function: foo]
console.log(typeof bar()); // function
