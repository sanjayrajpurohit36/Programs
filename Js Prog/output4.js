/* 
 Global excution context will be created and x = undefined will be set in memory allocation phase
 then in II phase x ki value 100 in code execution phase so 100 will be printed a line no 12.
 
 EC of annonymus function will be created and x will be set as undefined in memory execution phase 
 then in II phase x = 10; will be set in code execution phase.
 then console.log(x) will print 10 at line no 17.
    
 then EC of annonymus function will be deleted;
 
 then in GEC x is still present then console.log(x) at line 19 will pring 100.
*/
var x = 100;
console.log(x); // 100
(function () {
  var x = 10;
  console.log(x);
})();
console.log(x);

// Output:
// 100
// 10
// 100

var x = 100;
console.log(x); // 100
(function () {
  x = 10;
  console.log(x);
})();
console.log(x);

// Output:
// 100
// 10
// 10

// Frequently asked JS Questions

var name = "abc";
(function changeName() {
  console.log(name);
  var name = "xyz";
  console.log(name);
})();
console.log(name);

// Output
// undefined
// xyz
// abc

var name = "abc";
(function changeName() {
  console.log(name);
  name = "xyz";
  console.log(name);
})();
console.log(name);

//Output
//abc
//xyz
//xyz
