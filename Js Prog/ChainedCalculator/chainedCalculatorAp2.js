/***  Chained Calculator Approach 2  ***
 * In this approach we will use an object inside the calc function i.e "combiner".
 * We will return upon calling calc and every function inside it
 * so that we can do a chaining on it for calling the other functions
 */
function calc(initialValue = 2) {
  // accumulator
  var result = initialValue;
  var combiner = {
    add: (value) => add(value),
    subt: (value) => subt(value),
    res: () => res(),
  };

  const add = (a) => {
    //Note:- here we can create normal functions as well
    result += a;
    return combiner;
  };

  const subt = (s) => {
    result -= s;
    return combiner;
  };

  const res = () => {
    return result;
  };

  return combiner;
}

console.log(calc(2).add(2).res());
