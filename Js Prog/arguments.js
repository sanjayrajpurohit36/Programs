/*
    What will be the output of this code & why.
    Explain.
*/

function greet(x,y) {
    if(Object.keys(arguments).length) {
        arguments[0] = "Hello";
        arguments[1] = "World";
    }
    console.log((arguments))

}

greet() // sending undefined/ no params
greet(0,1) 
/*  It will print because params are passed then only arguments object will be 
    created and it will be overwritten as "Hello World"
    arguments[0] = x;
    arguments[1] = y;
    arguments[0] = "Hello";
    arguments[1] = "World";

    Note: Arguments object will only be created only iff arguments are passed to the function 
    that's why when we're not passing the arguments 
*/