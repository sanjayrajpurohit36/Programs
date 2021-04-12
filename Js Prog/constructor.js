function Person (fname, lname, age, color) {
        this.firstname = fname;
        this.lastname = lname;
        this.age = age;
        this.color = color;
}
function show(P) {
    console.log(P);
}    
var father = new Person("Pukhraj","Rajpurohit", 50, "brown");
show(father);
