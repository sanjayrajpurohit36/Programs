/* 
    A very common inteview question in JS
    What will be the output of obj
    Concept: 
    1. Primitive Data types
        Javascript has 5 data types that are passed by value: Boolean, null, undefined, String, and Number. 
        We’ll call these primitive types.
    2. Javascript has 3 data types that are passed by reference: Array, Function, and Object. 
        These are all technically Objects, so we’ll refer to them collectively as Objects.
*/
let obj = { name: "Sam", gender: "M" };
let obj2 = obj; // here obj is being assigned to obj2 by reference means whatever we change into obj2 will reflect in obj

obj2.name = "Tom";

console.log(obj);
// Output: { name: Tom, gender: M}

/************************************************/
let obj3 = Object.assign(obj, {});
obj3.name = "Max";

console.log(obj);
// Output: { name: Max, gender: M}

/************************************************/
let obj4 = JSON.stringify(obj);

obj4 = JSON.parse(obj4);

obj4.name = "Zen";

console.log("obj4", obj);
// Output : { name: Max, gender: M}
// In this case only the parent object will not get changed.
