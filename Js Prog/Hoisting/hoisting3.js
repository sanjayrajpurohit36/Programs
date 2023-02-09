/*  What will be the output of the following code
    Concept: Hoisting, (function, block) scope variables, var, let
*/


var boy = "max"

function displayPlayer1() {
    console.log(boy)
    if(true) {
        var boy = "ms";
        console.log(boy);
    }
    console.log(boy)
}

displayPlayer1();


