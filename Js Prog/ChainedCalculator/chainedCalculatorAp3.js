/***  Chained Calculator Approach 2  ***
 * Recursive Solution
 * The issue with this approach is that whenever we call any function the defination of add subt and res is
 * created again & again so which is not a recommended thing.
 */
function calc(initialValue = 3) {
  // accumulator
  var combiner = {
    add: (value) => add(value),
    subt: (value) => subt(value),
    res: () => res(),
  };

  console.log(true, initialValue); // this will be printed the number of times we call calc.
  const add = (a) => {
    return calc(initialValue + a);
  };

  const subt = (s) => {
    return calc(initialValue - s);
  };

  const res = () => {
    return initialValue;
  };

  return combiner;
}

console.log(calc(2).add(4).res());
