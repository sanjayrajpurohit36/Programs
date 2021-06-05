// chained calculator

function calc(initialValue) {
  // accumulator
  var result = initialValue;

  function add(a) {
    console.log("coming in add ", result, a);
    result += a;
    return reply();
  }

  function subt(s) {
    console.log("coming in subt ", result, s);
    result -= s;
    return reply();
  }

  function res() {
    return result;
  }

  function reply() {
    return {
      add: (value) => add(value),
      subt: (value) => subt(value),
      res: () => res(),
    };
  }
  return reply();
}

console.log(calc(2).add(2).subt(2).res());
