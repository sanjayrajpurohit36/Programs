// chained calculator

function calc(initialValue = 2) {
  // accumulator
  var result = initialValue;
  var combiner = {
    add: (value) => add(value),
    subt: (value) => subt(value),
    res: () => res(),
  };

  const add = (a) => {
    console.log("coming in add ", result, a);
    result += a;
    return combiner;
  };
  const res = () => {
    return result;
  };

  console.log(combiner.add(2).res());

  const subt = (s) => {
    console.log("coming in subt ", result, s);
    result -= s;
    return combiner;
  };

  // return combiner;
}

console.log(calc());
