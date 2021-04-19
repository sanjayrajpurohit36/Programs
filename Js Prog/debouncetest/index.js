//Testing decbounce in js

let data = 0;
function getData() {
  console.log("getting data =>", data++);
}

const doSomeMagic = function (fn, d) {
  let timer;
  return function () {
    let context = this,
      args = arguments;
    clearTimeout(timer);
    timer = setTimeout(() => {
      fn.apply(context, args);
    }, d);
  };
};

const betterGetDataFunction = doSomeMagic(getData, 300);
