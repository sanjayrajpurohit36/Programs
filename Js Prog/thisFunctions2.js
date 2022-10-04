/*
    What will be the output of the following code
    Concept: normal function / arrow function, this
*/

var name = "test name"
var testObj = {
    name: "Max",
    printName: function () {
        console.log(this.name)
        const print = () =>  console.log(this);
        print();
    },
    printName1: () => console.log(this.name)
}

testObj.printName()
testObj.printName1()