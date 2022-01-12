/* 
    What will be the output of the following code
*/


var a = 3
function ab() {
  var a = 2
  setTimeout(() => console.log(this.a))
}
c = ab()
 
/*
    This will give 3 as output as the var a on line no 6 is present in global context not the var a which is inside the function
    so that's why it will give 3 as output 
*/


let x = 3
function check() {
  console.log(this.a);  // undefined
}
check()

/*
  Reason: as let & const do not get declared in the same context
*/