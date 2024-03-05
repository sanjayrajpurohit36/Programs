/*
There is a concept in shadowing that the shadowing variable should not break the boundaries of
the shadowed variable so , I am writing few examples of illegal shadowing
*/

let a = 10;

{
    //  var a = 10; // uncomment this line and check
    console.log(a);
}

/*
 Reason : Here in the above example the variable a inside the block {} is doing the illegal shadowing of the variable a which is declared using let
 in the memory
*/


const b = 100;

{
    // var b = 1; // uncomment this line and check
    console.log(b);
}
console.log(b)


/*
 Reason : Here in the above example the variable b inside the block {} is doing the illegal shadowing of the variable a which is declared using const
 in the memory
*/