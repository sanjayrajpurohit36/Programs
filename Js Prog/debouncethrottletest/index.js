//Testing decbounce in js

let data = 0;
function getData() {
  console.log("getting data =>", data++);
}

// debounce function
const debounce = function (fn, d) {
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

const betterGetDataFunction = debounce(getData, 300);

//testing throttling
let gunTriggerCount = 0;
function triggerGun(name) {
  console.log(`${name} triggers the gun.`, gunTriggerCount++);
}

// throttle function
function throttle(fn, delay) {
  let flag = true;
  return function () {
    let context = this,
      args = arguments;
    if (flag) {
      fn.apply(context, args);
      flag = false;
      setTimeout(() => {
        flag = true;
      }, delay);
    }
  };
}
const betterTriggerGun = throttle(triggerGun, 3000);
