// Output question on the concept of MTQ, and callback queue

const promise = new Promise((resolve, reject) => {
	console.log(1);
	setTimeout(() => {
		console.log("timerStart");
		resolve("success");
		console.log("timerEnd");
	}, 0);
	console.log(2);
});

promise.then((res) => {
	console.log(res);
});

console.log(4);

/*
  1 will be consoled first
  
  The callback function of the Promise will get to Micro Task Queue 
  
  but
  
  Once the pointer reaches to the setTimeout then the callback of the Timeout function 
  the it will get added to the global window object with a timer of 0 sec.
  but Js will not wait for the timer to complete even if it is a 0 sec timer it will *console 2*
  hence 2 will be printed
  2
  
  then 4 will be printed as the timer is still in wait
  
  4
  then Once the timer completes then the callback function will come in-side the callback queue also then 
  as 4 is printed then there is no task present in the callstack, which means that the event loop can push the 
  callback function to the callstack after removing it from the callback queue
  
  then the below things will pe printed on the console.
  
  timerStart
  timerEnd
  success
*/
