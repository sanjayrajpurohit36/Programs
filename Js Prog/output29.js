/* What will be the output of the following code */

var p = 1
function outer() {
    var p = 2;
    function inner() {
        p++;
        console.log(p)
        var p = 3;
        console.log(p);

    }

    inner();
}

outer();


/*
Answer

NaN
3

Explanation:
As incrementing the variable p on the line no 7, we are incrementing undefined++ which will make itNaN so,
the output will be (NaN, 3).

Why p will be undefined at line no 7?
This is because of hoisting in JS, as there is a declaration of var p = 2 on line no 10 so,
it will get hoisted to the top of current lexical scope, with a value of undefined.

*/