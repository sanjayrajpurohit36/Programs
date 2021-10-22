// JS Tricks
// we can use or operator to return the default value of any var.
const { log } = console;
let person = { name: "Max", city: "New York" };
log(person.age || 23); // => 23 Reason: person.age is undefined so undefined || 23 will return 23
log(person?.age ?? 23); // => 23 using optional chaining
