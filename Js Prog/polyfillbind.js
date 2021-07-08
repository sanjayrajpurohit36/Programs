let person = { name: "Jay", surname: "Dixit" };

let printName = function (city, state) {
  console.log(
    `${this.name} ${this.surname} belongs to ${city} of the state ${state}.`
  );
};

// let logInfo = printName.bind(person);

// logInfo();

Function.prototype.myBind = function (...args) {
  let printName = this; // this var holds the function which will be executed when we call myBind
  // this keyword inside this function holds the -> printname Method
  let extraParams = args.slice(1);
  console.log(extraParams);
  return function (...params) {
    // taking all the extra params in array
    printName.apply(args[0], [...extraParams, ...params]); // we r using apply because we can send the rest params in array format only
  };
};

let logInfo2 = printName.myBind(person, "Mumbai");
logInfo2("Maharashtra");
