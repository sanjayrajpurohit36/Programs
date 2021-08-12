/*
    Create a polyfill for split function in Js, such that if we don't pass
    any delimiter to the function then by default it should take "$" as the delimiter.
*/

let str = "abc$d"; // Output [abc, d]

String.prototype.acutalSplit = String.prototype.split;
// Storing original split function in String's prototype so that we can use it while creating modified polyfill

// Polyfill
String.prototype.split = function (delimiter = "$") {
	// this = str as MIP (Method Invocation pattern is used)
	return this.acutalSplit(delimiter);
};

str.split();
