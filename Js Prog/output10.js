function test() {
  return 0;
}
console.log(typeof test()); // number

function test() {
  // return 0;
}
console.log(typeof test()); // undefined

function test() {
  return 0;
}
console.log(typeof test); // object
