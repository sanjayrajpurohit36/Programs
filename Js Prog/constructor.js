/*
    Create a constructor function which accepts Person details and creates a new object from it.
*/
function Person (fname, lname, age, ) {
        this.firstname = fname;
        this.lastname = lname;
        this.age = age;
}
function show(P) {
    console.log(P);
}    
var father = new Person("Max","Warner", 50);
show(father);
