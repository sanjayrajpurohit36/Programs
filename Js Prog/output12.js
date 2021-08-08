/*
    What will be the output of the following program in JS
    Note: Uncomment each block of code and check the result
*/

// var topping = "mushrooms";
// function pizzaParty() {
// 	var topping = "pepperoni",
// 		innerfunction = function () {
// 			var topping = "ham";
// 		};
// 	innerfunction();
// 	console.log("I would love to have " + topping + " on my pizza.");
// }

// Output: I would love to have pepperoni on my pizza.

/*****************************************************************************/

// var topping = "mushrooms";
// function pizzaParty() {
// 	var topping = "pepperoni",
// 		innerfunction = function () {
// 			topping = "ham";
// 		};
// 	innerfunction();
// 	console.log("I would love to have " + topping + " on my pizza.");
// }

//Output: I would love to have ham on my pizza.

/*****************************************************************************/

// var topping = "mushrooms";
// function pizzaParty() {
// 	var topping = "pepperoni",
// 		innerfunction = function () {
// 			var topping = "ham";
// 			return topping;
// 		};
// 	var topping = innerfunction();
// 	console.log("I would love to have " + topping + " on my pizza.");
// }

// Output: I would love to have ham on my pizza.

/*****************************************************************************/

// var topping = "mushrooms";
// function pizzaParty() {
// 	console.log("I would love to have " + topping + " on my pizza.");
// }

// Output : I would love to have mushrooms on my pizza
pizzaParty();

/*****************************************************************************/
