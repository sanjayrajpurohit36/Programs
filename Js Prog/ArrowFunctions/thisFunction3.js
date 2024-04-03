/*
    What will be the output of the following code
    Concept: normal function / arrow function, this
    Note: Run this code in browser
*/

var superHero = "Iron Man";
var testObj = {
  name: "Max",
  printName: function () {
    console.log("First: ", this.name);
    const self = this;
    const print = () => console.log("Second: ", this.name);
    print();
  },
  printSuperHero: () => console.log("Third: ", this.superHero),
};

testObj.printName();
testObj.printSuperHero();

/**
    Output: 
    First: Max
    Second: Max
    Third: Iron Man

    when we're calling the testObj.printName(); then it is MIP (Method invocation pattern) in which the value of "this" 
    inside the function will the the object which is mentioned before . operator, thats why it will print the Max as output
    as inside the printName function "this" is referring to thisObj.

    the arrow function print() inside the function printName() will inherit the value of "this" object from the lexical 
    scope of it's parent where it is defined so, due to that the arrow fn will have access to the same "this" object
    of print function hence it will print Max as the output

    But the same is not the case with arrow function which is defined as a new property as we know that arrow functions 
    don't have their own this so they inherit the value to "this" form their parent / or from their parent's lexical scope 
    which in this case will point to the window object, hence it will have the access to the variable 
    superHero hence it will print "Iron Man"
*/
