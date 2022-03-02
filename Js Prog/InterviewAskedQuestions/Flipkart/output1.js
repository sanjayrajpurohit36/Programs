/* 
    What will be the output of the following code
*/


var a = 3
function ab() {
  var a = 2
  console.log(this)
  setTimeout(() => console.log(this), 0)
}
c = ab()
 
/*
    This will give 3 as output as the var a on line no 6 is present in global context not the var a which is inside the function
    so that's why it will give 3 as output 
    Note: If you'll check using node it will give undefined but if you'll check in browser it will print 3
*/


let x = 3
function check() {
  console.log(this.a);  // undefined
}
check()

/*
  Reason: as let & const do not get declared in the same context
*/