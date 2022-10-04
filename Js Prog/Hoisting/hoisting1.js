/*  What will be the output of the following code
    Concept: Hoisting, (function, block) scope variables, var, let
*/


var player = "messi"

function displayPlayer() {
    console.log(player)
    if(player === "messi") {
        var player = "ms";
        console.log(player);
    }
    console.log(player)
}

displayPlayer();