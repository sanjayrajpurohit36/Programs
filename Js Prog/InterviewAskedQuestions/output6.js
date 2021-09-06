/*
    What will be the output of consoled statements.
    By: Dassault Systèmes
*/

MyClass = function () {
	this.a = "hello";
	this.b = "world";
};
MyClass.prototype.a = "John";
MyClass.prototype.c = 12;

obj = new MyClass();

console.log("obj.c:", obj.c);
console.log("obj.a:", obj.a);
console.log("obj.b:", obj.b);
console.log("obj.d", obj.d);
