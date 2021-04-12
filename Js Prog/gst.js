                // Using getter property to get the value of a object property.
var person = {
    fname: "",
    lname: "Rajpurohit",
    set pname(first_name){ 
        this.fname = first_name;
    }
    ,
    get name() {
        return this.fname.concat(" ").concat(this.lname);
    }
}
person.pname = 'Sanjay';
console.log(person.name);