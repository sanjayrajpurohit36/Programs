/*
    Prototypal Inheritance
    
    
    As the object2 is inheriting the properties of the object by __proto__ that's why it is called Prototypal Inheritance.
*/

let object = {
    name: "Max",
    country: "England",
    getInfo: function () {
        return `${this.name} belongs to ${this.country}`
    }
}

let object2 = {
    name: "Sam"
}

/*
    Ps: It is not recommended to change the __proto__ object as it is not a good way to work as well as it's a 
    very expensive expression
*/

object2.__proto__ = object;

console.log(Object.prototype.__proto__)
console.log(object2.__proto__); // now the __proto__ will be object
console.log(object2.__proto__.name); // Max
console.log(object2.country) // England
/*
    As object2 doesn't have country key but it's __proto__ object have the key country so it will search in it & will 
    return the value
*/
console.log(object2.getInfo()); // Method invocation pattern so this will point to object2
console.log(object.getInfo()); // Method invocation pattern so this will point to object
console.log(object2.__proto__.getInfo()); // Method invocation pattern so this will point to object