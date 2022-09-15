/*
    What will be the output of the following code snippet
*/

(function greetN() {
    console.log("Hello", this.name);
}.bind({ name: "John" }))()



/*
    Output: Hello John
*/