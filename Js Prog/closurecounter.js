// creating a conunter using closure

function wrapperFunction(baseCounterValue) {
  let count = baseCounterValue;
  function innerFunction() {
    return ++count;
  }
  return innerFunction;
}

console.log("starting first counter");
let counter1 = wrapperFunction(1);
console.log(counter1());
console.log(counter1());
console.log(counter1());
console.log(counter1());
console.log("starting second counter");
var counter2 = wrapperFunction(2);
console.log(counter2());
console.log(counter2());
console.log(counter2());
console.log(counter2());
console.log(counter2());
console.log(counter2());
