/**
 * Just by the function declaration we can't decide that what will be the value of this
 * inside the function.
 * The value of this inside the function depends upon how do we call the function
 * There are 4 Function Invocation Patterns by which we can call the function
 * FIP: Function Invocation Pattern
 * CIP: Constructor Invocation Pattern
 * MIP: Method Invocation Pattern
 * IDIP: Indirect Invocation Pattern
 *
 */

/**
 *
 * @param {*} title
 * @param {*} price
 * @returns Int
 */
function product(title, price) {
	this.title = title;
	this.price = price;
	console.log("this inside the function", this); // global object
	return 9; //this statement will be ignored (iff anything else is returned instead of an Object) if the product function is called while using constructor invocation pattern
}

/**
 * Function Invocation Pattern
 * value of this is the global object in Node js & Window Object in browser
 */

var obj1 = product("pen", 20);
console.log("FUNCTION INVOCATION PATTERN\n", obj1); // 9 will returned

/******************************************************************************************/

/**
 *  Constructor Invocation pattern CIP
 *  @return It will always return the newly created object
 *  value of this is always newly created object (iff an explicitely no object / non primitive data type  is returned
 *  i.e return {} / non primitive data type should not be there.)
 * */

var v1 = new product("pen", 20);
console.log("CONSTRUCTOR INVOCATION PATTERN\n", v1);

/******************************************************************************************/

/**
 * Method Invocation pattern MIP
 * value of this is always object before dot.
 */

var Foo = {
	product: function (title, price) {
		console.log("METHOD INVOCATION PATTERN\n", this);
	},
};

Foo.product();

// var koo = {
//   title: "koo",
//   age: 9,
// };
// koo.product();

/*******************************************************************************************/
/**
 * InDirect Invocation Pattern
 * You can pass value of this manually for that js has three functions :- "ABC"
 * apply (array), bind(new object), call(commas)
 **/

function sendEmail(message, to) {
	this.message = message;
	this.to = to;
	console.log(this);
}

var Manager = {
	name: "foo",
	sal: 2333323233,
};

var Emp = {
	name: "koo",
	sal: 23232333,
};

console.log("INDIRECT INVOCATION PATTERN\n");
sendEmail.apply(Manager, ["Hello how are you", "sanjayrajpurohit36@gmail.com"]);
sendEmail.call(Emp, "Hello How are you", "sanjayrajpurohit36@gmail.com");
