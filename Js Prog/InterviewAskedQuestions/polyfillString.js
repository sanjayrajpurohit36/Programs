/*
    Create a polyfill introduce such that if someone passes a name to it, it prints "Hi {name}, Nice to meet you.!"
    Ps: ignore double quotes

    By : Razorpay
*/

String.prototype.introduce = function () {
	return `Hi ${this}, Nice to meet you.!`;
};
let strArr = ['Sam', 'Zack'];
strArr.map((value, key) => {
	console.log(value.introduce());
});
