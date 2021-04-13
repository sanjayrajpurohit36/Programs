var a = 1;
function global() {
  console.log("It will refer to global var:", a); //1
}
function local() {
  if (true) {
    a = 3;
    console.log("It will take local var:", a); //3
  }
}
function let() {
  if (true) {
    let a = 4;
  }
  console.log("It will refer to global var coz let uses block scoping:", a); //3
}
function test() {
  if (true) {
    x = 4;
  }
  console.log("In test", x); //4
}
global();
local();
let();
test();
console.log("Last console to check final value:", a); //3
