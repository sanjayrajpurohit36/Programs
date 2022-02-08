/*
  You're given an object obj with some properties, in it, you need to create a function which will accept
  two params, first the object and second the property string which user wants to access eg:- 
  checkProperty(obj, 'b.c') you need to return the property value if such property exists otherwise return undefined.


  Eg: 
  checkProperty(obj, 'b.c') // 1
  checkProperty(obj, 'b.c.e') // undefined
*/
var obj = {
	a: 42,
	b: {
		c: 1,
		d: "foo",
		e: {
			a: 123,
			b: "zoo",
		},
	},
	c: {},
};
function checkProperty(object = {}, key = "") {
	let list = key.split("."); //splitting the property string on the basis of "." which will return me a list of keys which user wants to access
	let result;
	list.forEach((values) => {
		if (result) result = result[values];
		else result = object[values];
	});
	return result;
}

let property = ["b.c", "b.c.a", "a.b", "b.e.a", "c"];
property.forEach((value) => {
	console.log(checkProperty(obj, value));
});
