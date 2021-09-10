/*
    What will be the output of this code
*/
var name = "aditya";
var obj = {
	name: "vivek",
	getName: function () {
		console.log(this.name);
	},
};

var getName = obj.getName;

var obj2 = {name: "akshay", getName};
obj2.getName();

/*
    Ans: akshay
    Reason: 
    As we can clearly see that Method Invocation Pattern is used here because getName is a property for obj so, 
    for that the "this" object refers to the object which is written before "." operator
    so this.name will print "akshay".
*/
