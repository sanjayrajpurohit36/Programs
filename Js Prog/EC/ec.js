// This is to check 1st phase of EC creation(Execution Context)
var x = 7; // Add a debugger here and check the scope to check the value of variable in memory allocation phase.
function getName() {
  console.log("Hello I am JS");
}

console.log(x);
getName();
