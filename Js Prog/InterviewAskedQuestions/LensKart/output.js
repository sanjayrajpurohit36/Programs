/*
    What will be the output of the following below written code & explain.
*/

let obj = {
	firstName: "Max",
	printFunc: function() {
		console.log(this.firstName) // Max
    }
}
obj.printFunc();

/* 
    This will print Max bcoz here for calling the printFunc Method Invocation Pattern is used so,
    the value of this will become the object written before "." operator

    If you want to learn more about Method Invocation Patterns then kindly visit: 
    https://srpdev.hashnode.dev/guess-the-value-of-this
*/


let newObj = {
	firstName: "Max",
	printFunc: function() {
		console.log(this.firstName) // Max
        function inner() {
            console.log("this =>", this) // Global Object 
            console.log("name =>", this.firstName) // undefined
        }
        inner()
    }
}
newObj.printFunc();
/*
    The inner function will print the Global Object/ Window Object object as inner() is called using FIP Function Invocation Pattern due to which
    the value of this inside the function becomes the Global Object / Window Obejct also there is no "firstName" property exists in 
    Global Object / Window Object that's why the this.firstName will print undefined.
*/

