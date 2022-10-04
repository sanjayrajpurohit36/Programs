/*  What will be the output of the following code
    Concept: Hoisting, (function, block) scope variables, let
*/


var player = "messi"

function displayPlayer() {
    console.log(player)
    if(player === "messi") {
        let player = "ms";
        console.log(player);
    }
    console.log(player)
}

displayPlayer();