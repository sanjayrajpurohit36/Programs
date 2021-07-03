// JS Tricks
//we can use or operator to return the default value of any var.
const { log } = console;
let person = { name: "Max", city: "New York" };
console.log(person.age || 23); // => 23 Reason: person.age is undefined so undefined || "raj" will return "23"
console.log(person?.age ?? 23); // => 23 using optional chaining
