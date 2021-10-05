/*
    Difference between Object.seal(obj) and Object.freeze(obj)
    1. In Object.seal(obj) we can change the values of the properties that exist in the object.

    2. In Object.freeze(obj) we can't even change the values of the properties of that object.

    Note: We can't add any new property after using any of the two functions of Object.
*/
let obj = {
	name: "Tom",
	age: 21,
};

Object.seal(obj);
// Trying to change and addding a new property in the object
obj.name = "Zack";
obj.age = 32;
obj.class = "XI";
console.log("After sealing the object", obj); // {name: "Zack", age: 21}

Object.freeze(obj);
// Trying to change the property after freezing the object
obj.name = "Tom";
obj.age = 21;
obj.class = "XII"; //  trying to add a new prop in the object
console.log("After freezing the object", obj);
