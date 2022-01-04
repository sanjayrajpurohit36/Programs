/*
    What will be the output of this

*/

let randomValue = { name: "Lydia" }
randomValue = 23
console.log(!(typeof randomValue === "string"))

if (!typeof randomValue === "string") {
    console.log("It's not a string!")
} else {
console.log("Yay it's a string!")
}

// Output: Yay it's a string!

/*

Explanation: 
randomValue will be 23
23 is of type "number"
so, typeof randomValue will be "number" but the !before the typeof will change the number to (boolean)false 
so when false === "string" will compared it will be false, hence the if condition will be false so, 
it will go in else block and as a result of that "Yay it's a string!" will be printed.

*/