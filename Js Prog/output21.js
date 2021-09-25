/* 
    What will be the output of the following code
    Concept: lexical scope
*/

var v = 1;
var fun1 = function () {
	console.log(v);
};

var fun2 = function () {
	var v = 2;
	fun1();
};

fun2(); // 1

/*
    Reason: Output will be 1 because the parent of func1 is the main code so it will go there to look for 
    the variable v and the value of var v is 1 there. 
*/
