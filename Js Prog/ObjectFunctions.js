/**
 *
 * Here we' will discuss all the properties of Object.defineProperty method which we can apply to the object while defining it.
 *
 *
 *
 * In JS when we define a const object then we can also edit its properties
 * but that is not possible with const variables, so to make object's properties
 * not editable we can use Object.defineProperty function with property writable as false
 *
 * writable: false
 * this means the key which is defined using this property will become a read-only
 * property user can't edit that property of the object also even if user tries to edit
 * that property then in strict mode ('use strict') JS wil throw an error
 *
 *
 */
"use strict";
const Person = { name: "Tony", surname: "Roy" };

/**
 * Property: writable
 *
 * dob property will become read-only property of the object Person
 * */
Object.defineProperty(Person, "dob", {
  value: "21/11/1996",
  writable: false,
});

console.log(Person.dob);
Person.dob = "22/01/2001"; //  this will not work as the dob property is not writable and as we're using the strict mode it will also throw the error
console.log(Object.keys(Person));
console.log(Person);

// What if we want to freeze one existing property of Person object

Object.defineProperty(Person, "name", { writable: false });
Person.name = "Sanjay";

console.log(Person);
