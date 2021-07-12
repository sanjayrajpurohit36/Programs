/*
    We need to clear the Intervals because they will not be cleaned by GC
    unless we clear the Interval.
*/
setInterval(() => {
  const someConst = 10;
  console.log(someConst);
  // do something here
}, 1000);

// someConst may be cleaned at some point

// The handler itself is still referenced
// and will not be cleaned unless ...

/************************************************************************************/

// The fix? Assign the reference to a variable

let interval = setInterval(() => {
  const someConst = 10;
  console.log(someConst);
  // do something here
}, 1000);

// some code

// When you're done with the interval
clearInterval(interval);
