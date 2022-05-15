/*
    Whenever we create any object or function in javascript, the variable gets the access to some predefined functions & properties
    like arr.length, arr.toString() etc.
    So, where these functions and properties are coming from ?????
    Ans:  When we create any object, or function in JS the Javascript attaches an object to our created object
          which has these functions defined in it that's how we get access to all those properties by our object.
          To access that hidden object which Js attaches to out object we can do 
          ObjectName.__proto__ this will have all those pre defined functions and properties.
    
        "In simple words Js attaches an __proto__ object to every JS var, function, or object which we create in program."        
*/

var obj = {
    name: "Sanjay",
    city: "Udaipur",
    getInfo: function () { return `${this.name} " is from " + ${this.city}`; }
}



// console.log("obj : ", obj.__proto__)
// console.log("Object : ", Object.prototype);


/*
    obj.__proto__ will be as same as Object.prototype.
*/


var arr = [1, 2, 3];



console.log("arr : ", arr.__proto__);
console.log("Array : ",Array.prototype);


/*
    arr.__proto__ will be same as Array.prototype
    Note:
    As now we know that every object or array or function we declare in Js will have its own __proto__ object
    so, which means arr.__proto__ will also have its own __proto__
    yes it has its own __proto__ which we can check by consoling arr.__proto__.__proto__
    which will be as same as Object.prototype 

    So, that's how it explains that everything we create in Javascript is an object

    Now the questions comes that does arr.__proto__.__proto__ has its own __proto__ object
    the answer is no if we try to console arr.__proto__.__proto__.__proto__ it will be null
    that's how the prototype chaining ends
*/

console.log("Array's protytype's prototype", arr.__proto__.__proto__) // Object.prototype
console.log("Array's protytype's prototype's prototype", arr.__proto__.__proto__.__proto__) // null