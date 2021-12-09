/*
    What will be the output of the following code
*/
let original = {
    name : 'Sam'
}
  
let copy = Object.assign({}, original);

copy.name = "Max";
copy.age = 21;

console.log("=>",original) // Original object doesn't get affected
console.log("=>",copy) // only copied object gets affected