/* 
    What will be the output of this following code.
*/

function myfunc() {
	return new Promise((resolve, reject) => {
		setTimeout(() => {
			resolve("Hi");
		}, 1000);
	});
}
(async () => {
	console.log(await myfunc());
})();

// Ouput : after 1 sec Hi will be printed
