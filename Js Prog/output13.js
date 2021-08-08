/*
    What will be the output of this program
    Asked in Company: Nagarro
*/

function Person(firstName, lastName) {
	this.firstName = firstName;
	this.lastName = lastName;
}

var Person1 = new Person("Sam", "S");
console.log(Person1.nationality);

Person.prototype.nationality = "English";
console.log(Person1.nationality);

Person.prototype.nationality = "American";

var Person2 = new Person("Ramsy", "R.");

console.log(Person1.nationality);
console.log(Person2.nationality);

/* Output: 
    undefined
    English
    American
    American
*/
