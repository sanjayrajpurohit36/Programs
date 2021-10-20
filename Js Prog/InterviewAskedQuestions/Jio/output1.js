/** 
 * What will be the output of this code snippet
 */

function test(...params) {
    return params; // params getting spreaded in an array
}

var res = test(1,2,3);
console.log(res); // [1,2,3]


/**-----------------------------------------------------------------------------------------*/

var x= "hi"
function  print()  {
    console.log(x); // hoisted variable will have the value undefined in it.
    var x = "hello"
}
print() // undefined


/**-----------------------------------------------------------------------------------------*/


var a = [2,5,12,16.23,35];
var b = a.findIndex(abc);
// abc is passed to findIndex as a callback function
function abc (val, index, arr) {
    // for checking the params console.log(val, index, arr)
    return val > 20; // it will return the index of the first value greater than 20
}

console.log(b);