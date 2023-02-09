/*
    What will be the output of the following program.
    Concept: Object functions
*/

let obj1 = {
    name: "Virat"
}

let obj2 = {
     name: "Dhoni"
}

let resultObj = Object.assign(obj1, obj2);
console.log("=>", obj1, obj2, resultObj);
