/*
    How many times the "hi" will be printed and why?
*/

let isLoading = true;
setTimeout(() => {isLoading = false}, 0); 
 
while(isLoading) {
    console.log("hi")
}

/*
    Answer: hi will be printed infinite times.
    
    Reason: 
    "hi" will be printed infinite times because the Js compiler will never execute the
    callback function of the setTimeout as the call stack in JS will never get emptied
    due to continous running of the while loop. 
    
    ** As we know that the Event Loop will push the callbacks present in the 
    (task queue / callback queue) into the call stack only if the call stack is empty.
    
    But here the callstack will never get emptied because of the infinitely running while loop
    & because of that the value of isLoading will never become false so the while loop will never end.
*/