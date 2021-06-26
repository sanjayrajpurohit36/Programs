/* 
    What will be the output of this program 
    Concept: Promises
*/

function fetchNames() {
  return new Promise((resolve, reject) => {
    let names = ["london", "bay area", "silicon valley"];
    let error = "Error occured";
    reject(error);
    // resolve(names);
    while (true);
  });
}

console.log("fetching names");
fetchNames()
  .then((names) => {
    console.log(names);
    console.log("names fetched");
  })
  .catch((error) => {
    console.log(error);
  });
console.log("fetching names complete");

/*
 Output:  fetching names
 Reason: 
 Only the "fetching names" from line no 16 will be printed because the 
 execution pointer inside the function fetchNames() will also execute the 
 code after resolve()/ reject() statement inside the function so the 
 callstack/execution thread will get blocked in executing infinite while loop 
 so the execution pointer will never reach inside the .then block of promise
 at line no 18.

  
  
  
 */
