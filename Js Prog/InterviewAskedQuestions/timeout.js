/* 
    Problem Statement: The output of the below code is 
    Output:
    parent called 
    logger called
    Concepts Innvolved: Js Execution, Call stack, Event Loop, Callback Queue
    But the catch is that we need to modify the below writter programs in such a way that
    "logger called" should be consoled first and then "parent called".

    Check soluton below:   ||
                           ||   
                        \\ || //
                         \\  //
                          \\//      
*/

// Given Code
/*
    function logger() {
    setTimeout(() => {
        console.log("logger called");
    }, 1000);
    }

    function parent() {
    logger();
    console.log("parent called");
    }

    parent();
 */

/****************************************************************************************************************/
/*
    Solution: Using Promises
    For solving this we need to create a promise in the logger function
    & inside that we need to put the setTimeout function
*/
function logger() {
  return new Promise((resolve, reject) => {
    setTimeout(() => {
      console.log("logger called");
      /*
          we're adding resolve here because we after 1 sec the 
          execution pointer will execute the callback of the setTimeout so after that only 
          we have to resolve otherwise it will result the previous output only.

          NOTE: if we do resolve() before/after the setTimeout function then the output will be save as 
          previous.
          */
      resolve();
    }, 1000);
    // resolve();  // if we do this then the output will be the same as mentioned in the PS;
  });
}

function parent() {
  logger().then((res) => {
    console.log("parent called");
  });

  // no catch block is required
}

parent();
/****************************************************************************************************************/
/* 
    Solution using async & await
*/
async function parent() {
  logger();
  console.log("parent called");
}

parent();
