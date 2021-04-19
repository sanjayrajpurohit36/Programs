/* 
defination:
debounce function returns function when there is a DIFFERENCE of certain time lets us 
say x sec/x ms in between two key stroke events
*/

// scenario
function getDataOnKeyPress() {
  // api call
  // fetch and return data
  console.log("function called");
}
/* but this function will call api on every keystroke
we want to create a function which will doSomeMagic on getDataOnKeyPress
which will reduce the API calls to reduce the no of calls systems makes.
*/
const doSomeMagic = (fn, delay = 300) => {
  let timer;
  return function () {
    let context = this, // to achieve that we're maintaining the this in context & arguments in args  // also it is done to check that the environment(the lexical scope)in which this function is being called is same with the same args
      args = arguments;
    clearTimeout(timer);
    timer = setTimeout(() => {
      fn.apply(context, args); // we will call this function using apply to fix out this variables and context
    }, delay);
  };
};

function moreEfficientGetData() {
  doSomeMagic(getDataOnKeyPress());
}
