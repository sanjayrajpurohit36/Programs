            // This is an special case in js where we have same name of local and global var.
var x = 1;
function test() {
    //var x;
    console.log(x);     // undefined
    if(x) {
        var x = 200;
       console.log("The value of x in if:",x);
    }
    else {x = 400;}
    console.log("The value of x:",x);
}
test();


/*
    This code will execute the else condition only because it has value of x = undefined
    this code is really very imp
*/