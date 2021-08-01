let resolver;
const promise = new Promise((resolve) => {
	resolver = resolve;
});

promise.then((res) => {
	console.log(res);
});

setTimeout(() => {
	console.log("1 timeout cb");
	resolver("Resolved");
}, 3000);

setTimeout(() => {
	console.log("2 timeout cb");
}, 3000);
