/* 
    What will be the output of the following code.
    Note:- Asked in *Nagarro*
*/

function test() {
	let x = this ? class y {} : class z {};
	console.log(typeof x + " , " + typeof z);
}
test(); // function, undefined
