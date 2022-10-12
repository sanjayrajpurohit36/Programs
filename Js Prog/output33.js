/*
    What will be the output of the folloing code
    Concept: Object Copy, Object Referece assignment
*/

var obj = { name: "Max", age: 25, city: "Mexico" };
var objcpy1 = obj
var objcpy2 = objcpy1;

obj.name = "Ken";
objcpy1.name = "Zen"
objcpy2.name = "Tan"

console.log(obj)
console.log(objcpy1)
console.log(objcpy2)


/*
Output:

    { name: 'Tan', age: 25, city: 'Mexico' }
    { name: 'Tan', age: 25, city: 'Mexico' }
    { name: 'Tan', age: 25, city: 'Mexico' }
*/