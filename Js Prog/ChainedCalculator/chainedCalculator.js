// chained calculator approach 2

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

console.log(calc());
