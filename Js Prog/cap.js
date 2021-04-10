// Call, Apply, Bind
let obj1 = {
  name: "sanjay",
  surname: "raj",
};
let obj2 = {
  name: "rahul",
  surname: "raj",
};
let showCompleteName = function (city, state) {
  console.log(
    this.name + " " + this.surname + " belongs to " + city + " " + state + "."
  );
};
//call
console.log("Printing using call function \n");
showCompleteName.call(obj1, "Udaipur", "Rajasthan"); // passing obj1 so that this keyword in the function will point to this obj1 object
showCompleteName.call(obj2, "Udaipur", "Rajasthan");

// apply
console.log("\nPrinting using apply function \n");
showCompleteName.apply(obj1, ["Udaipur", "Rajasthan"]); //passing extra params other than this inside array.
showCompleteName.apply(obj2, ["Udaipur", "Rajasthan"]); //passing extra params other than this inside array.

// bind
console.log("\nPrinting using bind function \n");
let copyFunction = showCompleteName.bind(obj1, "Udaipur", "Rajasthan");
copyFunction();
